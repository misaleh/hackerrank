#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

struct{
    int type; //open 1 or close 0
    int parents;
    int closed;
    string tag; 
    vector<string> prop;
    vector<string> value;
    string orgTag;
} command[20];
int main() {
    int n,q,parentsNumber = 0, k = 0;
    cin>>n>>q;
    string indata("");
    string qdata("");
    string stringdot(".");
    string qtag,qprop,tmpprop,tmpval;
    cin.ignore(256, '\n');

    for(int i = 0 ; i < n; i++)
        {
         getline(cin,indata);
         indata.erase(indata.begin(),indata.begin()+1);//remove first char
         indata.erase(indata.end()-1);//remove last char
         //cout<<indata<<endl;
         if(indata[0] == '/' ) //close
           {
                  command[i].type = 0;
                  indata.erase(indata.begin(),indata.begin()+1);//remove first char
                  parentsNumber --;
                  for(int z = 0 ; z < i ; z++)
                      {
                      if(command[z].orgTag  == indata ) 
                  {command[z].closed = 1;
                   
                  }
                  }
             //cout<<indata<<" CLOSED = "<<command[i].closed<<endl;
           }
        else
           {
                  command[i].closed = 0 ;
                  command[i].type = 1;
                  command[i].parents = parentsNumber++;
                  for(int j = 0 ; j < indata.size();j++)
                      {
                            if((indata[j] == '"') ||(indata[j] == '=') ) indata[j] = ' ';
                            
                      }
                  istringstream iss(indata);
                  iss>>command[i].tag;
                  command[i].orgTag = command[i].tag;  
                  while(iss>>tmpprop)
                  {
                      iss>>tmpval;
                      command[i].prop.push_back(tmpprop);
                      command[i].value.push_back(tmpval);
                  }
                  //cout<<"COMMANDS"<<endl;
                 // cout<<command[i].tag<<endl;
                  for(int l = 0 ; l <command[i].prop.size();l++)
                      {
                      //cout<<command[i].prop[l]<<" "<<command[i].value[l]<<endl;
                  }
                  //cout<<indata<<endl;
            
             k = 1;
             while(command[i].parents)
                {
                   if(command[i-k].type == 0)
                   {
                   }
                 else if(command[i-k].closed ==1)
                     {
                     }
                   else
                       {
                            command[i].tag = command[i-k].orgTag+stringdot+command[i].tag;
                            command[i].parents--;   
                       }
                    k++;
                    
                }
            //cout<<"PARENTS"<<endl;
            //cout<<command[i].tag<<endl;
            
            
           }

        }

    for(int i = 0 ; i < q ; i++)
    {            int found = 0;

                 getline(cin,qdata);
             //   cout<<"QDATAA"<<endl;
             //    cout<<qdata<<endl;
        for(int j = 0 ; j < qdata.size();j++)
        {
                            if((qdata[j] == '~')) qdata[j] = ' ';                    
        }
           istringstream iss(qdata);
           iss>>qtag;
           iss>>qprop;
           //cout<<qtag<<" "<<qprop<<endl;
           found = 0 ;
        for(int m = 0 ; m < n; m++)
            {
                   if(command[m].tag == qtag)
                       {
                            for(int s = 0 ; s < command[m].prop.size();s++)
                                {
                                   if(command[m].prop[s] == qprop)
                                   {
                                     found = 1 ;
                                     cout<<command[m].value[s]<<endl;
                                  }
                                }
                       }
                    
            }
        if(found == 0) cout<<"Not Found!"<<endl;
        //search for tags and check prop then cout val 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


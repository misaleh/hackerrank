#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string,int>m;
    int Q,t,marks;
    string name;
    cin>>Q;
    for(int i =  0 ; i < Q; i++)
        {
            cin>>t>>name;
            if( t == 1 )
                {
                    cin>>marks;
                    m[name] += marks;
                }
            if(t == 2)
                {
                    m.erase(name);
                }
            if(t == 3)
                {
                    cout<<m[name]<<endl;
                }
        }
    return 0;
}


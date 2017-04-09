#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q,x,t;
    cin>>Q;
    set<int> s;
    set<int>::iterator itr;
    for(int i = 0 ; i < Q ; i++){
        cin>>t>>x;
        if(t == 1) s.insert(x);
        else if(t == 2) s.erase(x);
        else if(t == 3)
        {
            itr = s.find(x);
            if(itr == s.end())
                cout<<"No\n";
            else cout<<"Yes\n";
        }   
       
            
    }
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N,x,a,b;
    cin>>N;
    vector<int> v(N);
    for(int i = 0; i < N ; i++)
    cin>>v[i];
    cin>>x>>a>>b;
    v.erase(v.begin()-1+x);
    v.erase(v.begin()-1+a,v.begin()-1+b);
    cout<<v.size()<<endl;
    for(int i = 0 ; i <v.size() ; i++)
        cout<<v[i]<<" ";
    return 0;
    
}


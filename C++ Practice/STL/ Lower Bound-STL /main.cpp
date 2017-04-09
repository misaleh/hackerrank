#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,Q,x;
    cin>>N;
    vector<int> v(N);
    vector<int>::iterator it = v.begin();
    for(int i= 0 ; i < N ; i++) cin>>v[i];
    cin>>Q;
    for(int i = 0 ; i < Q ; i++){
        cin>>x;
        it = lower_bound(v.begin(),v.end(),x);
        if(it != v.end())
            if(*it == x) cout<<"Yes ";
            else cout<<"No ";
            cout<<it - v.begin() + 1<<endl; 
    }
    return 0;
}


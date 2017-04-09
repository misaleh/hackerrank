#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int x, N ;
    cin>>N;
    for(int i = 0 ; i < N ; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end()); 
    for(int i = 0 ; i < N ; i++)
        cout<<v[i]<<" ";
    return 0;
}


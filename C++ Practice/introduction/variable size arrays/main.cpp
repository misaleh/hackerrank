#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<int> vi;
int main() {
    unsigned int n,q,k,m,x,y;
    cin>>n>>q;
    vector<vi>arr(n);
    for(int i  = 0 ; i <n; i++)
    {
        cin>>k;
        for(int j = 0 ; j < k ; j++)
            {
                  cin>>m;
                  (arr[i]).push_back(m);
            }
    }
    for(int i = 0; i < q; i++)
        {
        cin>>x>>y;
        cout<<(arr[x])[y]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


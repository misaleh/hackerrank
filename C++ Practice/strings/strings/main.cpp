#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a,b,adash, bdash;

    cin>>a>>b;
    char a0 = a[0];
    char b0 = b[0];
    bdash = b;
    adash = a;
    bdash[0] = a0;
    adash[0] =b0;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<(a+b)<<endl;
    cout<<adash<<" "<<bdash<<endl;
    return 0;
}


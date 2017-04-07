#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


vector<int> parseInts(string str) {
   // Complete this function
    int i = 0 ;
    vector<int> v;
    istringstream iss(str);
    char ch=',';
    while(iss >> i)
    {
    iss>>ch;
    v.push_back(i);
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


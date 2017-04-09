#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
    deque<int> d(k);
    for (int i = 0; i < k; i++)//for first k elements keep the largest with smallest index then sort to smallest
    {
        while ( (!d.empty()) && arr[i] >= arr[d.back()])
            d.pop_back();  
        d.push_back(i);
    }
    
     for (int i = k; i < n; i++)//for each element
    {
        cout << arr[d.front()] << " "; //the front is the largest 
        while ( (!d.empty()) && d.front() <= i - k) //remove elements outside window
           d.pop_front();  
 
        while ( (!d.empty()) && arr[i] >= arr[d.back()]) //sort the same way
            d.pop_back();
 
        d.push_back(i);
    }
     cout << arr[d.front()];
        cout<<endl;

}

int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
   cout<<"Enter no. of elements:";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  cout<<"Elements in reverse order"<<endl;
  for(int j=(n-1);j>=0;j--)
  {
      cout<<arr[j]<<" ";
  }
   
   
    return 0;
}

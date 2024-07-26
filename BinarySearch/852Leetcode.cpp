#include<bits/stdc++.h>
using namespace std;

int PeakElement(vector<int> &arr){
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  while(s<e){
    if(arr[mid]<arr[mid+1]){
s=mid+1;
    }
    else{
        e=mid;
        
    }
   
 mid=s+(e-s)/2;
  }
  return arr[s];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];

    }

 int peakindex= PeakElement(arr);
 cout << peakindex << endl;
}
#include<bits/stdc++.h>
using namespace std;
int PivotElement(int n,vector<int> &arr,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
     while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
     }
     return s;
}

int main(){
    int n;
    cin >>n;
     int k;
        cin >> k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];

        }
        int k;
        cin >> k;
  int pivotelement=PivotElement(n,arr,k);
  cout << pivotelement << endl;
}
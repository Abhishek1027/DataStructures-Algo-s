#include<bits/stdc++.h>
using namespace std;
void swaparray(int n,int arr[]){
   for(int i=0;i<n-1;i=i+2){
    int temp = arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;

   }
for(int i=0;i<n;i++){
    cout << arr[i] << endl;
}
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[100];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
         swaparray(n,arr);
    }
    
}

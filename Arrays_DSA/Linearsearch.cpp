#include<bits/stdc++.h>
using namespace std;
int printarray(int a[], int n,int x){
 
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
        
       
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
   int n;
   cin >> n ;
   int a[100];
   for(int i=0;i<n;i++){
     cin >> a[i];
    
   }
   int x;
   cin >> x;
   cout << printarray(a,n,x);
   
}
 return 0;
   
}
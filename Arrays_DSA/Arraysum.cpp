#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100];
    for(int i=0;i<=n-1;i++){
            cin >> a[i];
    }
int sum=0;
    for(int i=0;i<n;i++){
         
          sum=sum+a[i];

    }
    cout << sum << endl;
}
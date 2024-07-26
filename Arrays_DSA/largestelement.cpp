#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[20];

    for(int i=0;i<n;i++){
        cin >> a[i];

    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]> max){
            max=a[i];
        }
        
    }
      cout << max << endl;
}
// INT_MIN is basically  -infinity , By including this we can get largest value even for negative integers.
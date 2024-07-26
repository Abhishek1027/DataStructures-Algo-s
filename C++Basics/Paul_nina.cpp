#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int p,x,r_1,n,y,r_2;
        cin >> p>>x>>r_1 ;
        cin >> n>> y>> r_2;
           int z= (p/x)+r_1;
           int q=(n/y)+r_2;
           if(z<q){
            cout << "PAUL";

           }
           if(q<z){
            cout << "NINA";

           }
           cout << "BOTH";
    }
}
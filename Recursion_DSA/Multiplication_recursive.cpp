#include <bits/stdc++.h>
using namespace std;
int multiplyNumbers(int m,int n){
    
    
    if(m==0||n==0){
        return 0;
    }
    if(n>m){
        return multiplyNumbers(n,m);
    }
    return m + multiplyNumbers(m,n-1);

}
int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}

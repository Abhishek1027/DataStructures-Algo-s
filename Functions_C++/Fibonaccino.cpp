#include<bits/stdc++.h>
using namespace std;

bool checkmember(int n){
    int a=0;
    int b=1;
    int c;
    while(a<n){
    c=a+b;
    a=b;
    b=c;
}
return a==n;
}



int main(){

  int n; 
  cin >> n ;
  if(checkmember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
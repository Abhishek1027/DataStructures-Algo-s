#include<bits/stdc++.h>
using namespace std;
int fibo(int p){
  if(p==0){
       return 0;
  }
  if (p==1){
    return 1;
  }
  
  int SO1 = fibo(p-1);
  int SO2 = fibo(p-2);
  return SO1+SO2;


}
int main(){
 int p;
 cin >> p;
 cout << fibo(p) << endl;
}
#include<bits/stdc++.h>
using namespace std;
bool checknumber(int input[],int size,int x){
    if(size==0){
        return false;
    }
    else if (input[0]==x){
        return true;
    }
    return checknumber(input+1,size-1,x);
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    if(checknumber(input, n, x)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    delete[] input;
    return 0;
}
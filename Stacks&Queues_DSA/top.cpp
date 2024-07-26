#include<iostream>
#include<stack>
using namespace std;
int main(){
    int sum=0;
    stack<int> mystack;
    mystack.push(5);
    mystack.push(2);
    mystack.push(4);
    mystack.push(8);

mystack.emplace(17);

    while(!mystack.empty()){
        sum=sum+mystack.top();
        mystack.pop();
    }
    cout << sum;
    
}
#include<bits/stdc++.h>
using namespace std;
/*Functions are set of code which performs something for you
Functions are used to modularise code 
Functions are used to increase readability
Functions are used to use same code multiple times
void
return
parameterised
non paramaterised


*/
/*int sum(int num1,int num2){
    int num3 = num1+ num2;
    return num3;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1,num2);
    cout << res; 
    return 0;
} 
*/

// Using void

/*void sum(int num1,int num2){
    int num3 = num1+ num2;
    cout << num3;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1,num2);
     
    return 0;
} 
*/


//Maxx function


int maxx(int num1,int num2){
    if(num1>=num2){
        return num1 ;
}
    
        return num2;
}
    

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1,num2);
    cout << maximum ;
    return 0;
} 

#include<bits/stdc++.h>
using namespace std;

int subsequences(string input,string output[]){
  if(input.empty()){  //We can also use input.size()==0 or input[0]=="";
    output[0]="";
    return 1;
  }
  string smallString = input.substr(1);
  int smallOutputSize= subsequences(smallString,output);
  for(int i=0;i<smallOutputSize;i++){
    output[i+smallOutputSize] =input[0]+ output[i];
  }
  return 2*smallOutputSize;
}

int main(){
   string input;
   cin>> input;
   string* output = new string[1000];
   int count = subsequences(input,output);
   for(int i=0; i<count ;i++){
    cout << output[i] << endl;
   }
}
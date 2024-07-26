#include<bits/stdc++.h>
using namespace std;
void fahrencelsi(int s,int e,int w){
    for(int i=s;i<=e;i=i+w){
        int celsius =(int)((5.0/9)*(i-32));
        cout << i << " " << celsius << endl;
    }
}

int main(){
int s,e,w;
cin >> s>>e>>w;
fahrencelsi(s,e,w);
 
}
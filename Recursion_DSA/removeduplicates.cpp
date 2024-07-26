#include <bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char s[]){
    if(s== '\0'){
        return;
    }
    removeConsecutiveDuplicates(s+1);

    


}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
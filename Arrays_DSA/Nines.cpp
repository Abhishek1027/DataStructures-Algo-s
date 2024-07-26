#include <bits/stdc++.h>
using namespace std;


int isSubsequencePossible(int n, vector<int>& a, int k) {
    int count_nines = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 9) {
            count_nines++;
            if (count_nines == k) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    int n ,k; // Length of array A
    cin >> n>> k;
    
    vector<int> a;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // Length of the subsequence to find

    int result = isSubsequencePossible(n, a, k);
        cout << result <<endl;

    
    }
}
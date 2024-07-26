#include<bits/stdc++.h>
using namespace std;

//<<<<<<<<<<<<<<  ✨ Codeium Command 🌟 >>>>>>>>>>>>>>>>
/*
+ * This function recursively searches for the first index of a given number in an array.
+ *
+ * Parameters:
+ *   input - an array of integers
+ *   n     - the size of the array
+ *   x     - the number to search for
+ *
+ * Returns:
+ *   The index of the first occurrence of x in the array, or -1 if x is not found.
+ */
 int firstIndex(int input[],int n,int x){
   // Base case: if the array is empty, return -1
     if(n==0){
         return -1;
     }
    // Base case: if the first element of the array is equal to x, return 0
     if(input[0]==x){
         return 0;
     }
    // Recursive case: call firstIndex on the remaining elements of the array
     int ans= firstIndex(input+1,n-1,x);
    // If the recursive call returns -1, that means x is not in the array,
   // so return -1
     if(ans == -1){
            return -1;
     }
    // If the recursive call returns a non-negative value, that means x is in
    // the array, so return the index of the first occurrence plus 1 (since the
    // recursive call only looked at subsequent elements)
     return ans+1;

 }
//<<<<<<<  35063944-21fd-4f06-a66a-a8746fdceff5  >>>>>>>


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}


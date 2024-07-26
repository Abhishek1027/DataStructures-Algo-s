#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
vector<int> getConcatenation(vector<int>& nums){

    int len=nums.size();
    vector<int> ans(2*len,0);
    for(int i=0;i<len;i++){
        ans[i]=nums[i];

    }
    for(int i=0;i<len;i++){
        ans[i+len]=nums[i];
    }
    return ans;
}
};





int main() {
    Solution sol;
    
    // Get input from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    // Call the getConcatenation method
    vector<int> concatenated = sol.getConcatenation(nums);
    
    // Output the concatenated vector
    cout << "Concatenated vector: ";
    for (int num : concatenated) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
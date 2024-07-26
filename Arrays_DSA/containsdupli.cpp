#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mpp;
                     
        for(int i = 0; i < nums.size(); i++) {
            if(mpp.find(nums[i]) != mpp.end()) {
                return true;
            }
            mpp.insert(nums[i]);
        }
        return false;
    }
};

int main() {
    Solution solution;
    
    // Input array from user
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Check for duplicates
    cout << "Array contains duplicates? " << (solution.containsDuplicate(nums) ? "Yes" : "No") << endl;

    return 0;
}

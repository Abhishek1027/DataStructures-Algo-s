#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n - 1] > nums[n - 2])  return n - 1;
        int start = 0;
        int end = n - 2;
        while(start < end){
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[mid + 1]){
                end = mid;
            }
            else{
                start = mid + 1;
            }
        }
        return end;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    
    int peakIndex = sol.findPeakElement(nums);
    cout << "The peak element is at index: " << peakIndex << endl;
    
    return 0;
}

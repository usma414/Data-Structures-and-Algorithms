
// #Using Kadane's Algorithm

#include <iostream>
#include <vector>
using namespace std;


class Solution{
public: 

    int maxSubarraySum(vector <int> &nums) {

        int currSum = 0;
        int maxSum = INT32_MIN;

        for(int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            maxSum = max(currSum, maxSum);

            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {

    Solution obj;
    vector<int> nums = {3,-4,5,4,-1,7,-8};

    cout << obj.maxSubarraySum(nums);
}

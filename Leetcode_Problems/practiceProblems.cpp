#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    vector<int> twoSum(vector<int> &nums, int target) {

        vector<int> ans;
        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            int pairSum = nums[i] + nums[j];

            if (pairSum < target)
            {
                i++;
            } 
            else if (pairSum > target)
            {
                j--;
            } else 
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
        return ans;
    }


    


};

int main() {

    Solution obj;
    vector<int> nums = {2,7,11,17};
    vector<int> ans = obj.twoSum(nums, 9);

    cout << ans[0] << ", " << ans[1] << endl;
}
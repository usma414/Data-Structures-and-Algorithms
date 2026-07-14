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


    

    vector<int> productSelf(vector<int> nums){

        int n = nums.size();
        vector<int> ans(n,1);

        for (int i = 1; i < n; i++ ) {
            ans[i] = ans[i-1] * nums[i-1]; 
        }

        int suffix = 1;
        for(int j = n - 2; j >=0; j--) {
            suffix *= nums[j+1];
            ans[j] *= suffix;
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
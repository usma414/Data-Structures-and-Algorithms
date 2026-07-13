
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    vector<int> productExceptSelf(vector<int> nums) {

        int n = nums.size();
        vector<int> ans(n,1);
        // vector<int> prefix(n,1);
        // vector<int> suffix(n,1);

        for (int i = 1; i< n; i++) {
            ans[i] = ans[i -1] * nums[i - 1];
        }

        int suffix = 1;
        for(int j = n -2; j >= 0; j--) {
            suffix *= nums[j + 1];
            ans[j] *= suffix;
        }

        return ans;
    }
};

int main() {

    Solution obj;
    vector<int> nums = {1,2,3,4};
    vector<int> ans = obj.productExceptSelf(nums);
    
    for (int i = 0; i< ans.size(); i++) {
        cout << ans[i] << " " ;
    }
    

}
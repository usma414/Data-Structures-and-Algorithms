
// # BRUTE FORCE APPROACH   Gives O(n2)

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {

    vector<int> ans;

    for (int i= 0; i<nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {

            if(nums[i] + nums[j] == target) {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    return ans;
}

int main() {

    vector<int> nums = {2,7,11,17};
    vector<int>ans = twoSum(nums, 19);
    cout << ans[0] << ", " << ans[1] << endl;

}



// Two Pointer Approach    Gives O(n)

vector<int> twoSum (vector<int> &nums, int target) {

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

int main() {

    vector<int> nums = {2,7,11,17};
    vector<int> ans = twoSum(nums, 13);

    cout << ans[0] << ", " << ans[1] << endl;
}




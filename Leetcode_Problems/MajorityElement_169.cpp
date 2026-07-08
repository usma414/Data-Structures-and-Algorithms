
// #Moore's Voting Algorithm

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int majorityElement(vector<int> &nums) {

        int freq = 0;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            if (freq == 0)
            {
                ans = nums[i];
            }
            if (ans == nums[i])
            {
                freq++;
            } else 
            {
                freq--;
                ans = nums[i];
            }
        }
        return ans;
    }

};

int main() {

    Solution obj;
    vector<int> nums = {1,1,2,2,3,2,2};
    cout<< obj.majorityElement(nums);
}



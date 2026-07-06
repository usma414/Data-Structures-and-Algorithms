// #Single Number -----> Leetcode Problem 136

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int singleNumber(vector<int> &nums) {
    
        int ans = 0;

        for(int val: nums) {
            ans = ans ^ val;
        }
    return ans;

    }
};

int main() {

    Solution obj;
    vector<int> nums = {4,1,2,2,1};
    cout << obj.singleNumber(nums);


}


#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:

//Circular Type 
    vector<int> nextGreaterElement(vector<int> nums) {

        stack<int> s;
        vector<int> ans(nums.size());

        for(int i = 2 * nums.size() - 1; i >= 0; i--) {

            int index = i % nums.size();

            while(s.size() > 0 && s.top() <= nums[index]) {
                s.pop();
            }

            if(i < nums.size()) {
                if(s.empty()) {
                    ans[index] = -1;
                } else {
                        ans[index] = s.top();
                    
                }
            }

            s.push(nums[index]);
        }
        
        return ans;
    }
};
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


    int maximumSubarray(vector <int> values) {
        
        int currSum = 0;
        int maxSum = INT32_MAX;

        for(int i = 1; i < values.size() ; i++) {
            currSum += values[i];
            maxSum = max(currSum, maxSum);

            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }


    int majorityElement(vector<int> &digits) {

        int freq = 0;
        int ans = 0;

        for(int i = 0; i < digits.size(); i++) {
            if (freq == 0) {
                ans = digits[i];
            } 

            if(ans == digits[i]) {
                freq++;
            } else 
            {
                freq--;
                ans = digits[i];
            }

        }
        return ans;
    }


    int buyAndSell (vector <int> prices) {

        int maxProfit = 0;
        int bestBuy = prices[0];

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }


    int mostWater(vector<int> heights) {

        int lp = 0;
        int rp = heights.size() - 1;
        int maxWater = 0;

        for (int i = 0; i < heights.size(); i++) {
            int width = rp - lp;
            int conheight = min(heights[rp], heights[lp]);
            int currWater = width * conheight;

            maxWater = max(currWater, maxWater);

            if(heights[lp] < heights[rp]) {
                lp++;
            } else {
                rp--;
            }
        }
        return maxWater;
    }


};

int main() {

    Solution obj;
    // vector<int> nums = {2,7,11,17};
    // vector<int> ans = obj.twoSum(nums, 9);

    // cout << ans[0] << ", " << ans[1] << endl;

    // vector<int> values = {-2, 4, 4, -1, 8};
    // cout<< obj.maximumSubarray(values) << endl;

    vector<int> digits = {1,3,1,3,1,3,3,3,2};
    cout << "Majority Element: " << obj.majorityElement(digits) << endl;

    vector<int> prices = {2,5,3,7};
    cout << "Max Profit: " << obj.buyAndSell(prices) << endl;

    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout<< "Max Water in a container: " << obj.mostWater(heights) << endl;
}
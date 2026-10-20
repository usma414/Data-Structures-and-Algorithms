#include <iostream>
#include <vector>
#include <string>
#include<cmath>
#include <cctype>
using namespace std;

class Solution{
public:
// A drone fleet has recorded the remaining battery percentages of its drones. 
// Before a mission, the fleet manager needs to identify pairs of drones whose
//  combined battery capacity meets an exact target.
// The battery percentages are sorted in ascending order:

// Find all pairs of battery percentages whose sum equals target. 
// Each drone can appear in at most one reported pair, and each 
// pair must use two distinct array elements.


// Solution:

    vector<pair<int, int>> pairTargets(vector<int>& arr, int target){

        int i = 0;
        int j = arr.size() - 1;
        vector<pair<int, int>> ans;

        while(i < j){
            int sum = arr[i] + arr[j];

            if(sum < target){
                i++;
            } else if(sum > target){
                j--;
            } else {
                ans.push_back({arr[i], arr[j]});
                i++;
                j--;
            }
        }
        return ans;
    }



// A spacecraft has a set of cargo modules with different masses. 
// Engineers have sorted the masses and need to determine which two 
// modules together use the maximum possible payload mass without 
// exceeding the spacecraft's payload limit.

// Find the two module masses whose sum is as large as possible while 
// remaining less than or equal to limit.

    vector<pair<int, int>> twoModulemasses(vector<int>& arr, int limit){

        int i = 0;
        int j = arr.size()-1;
        int maxSum = INT32_MIN;
        vector<pair<int,int>> ans;

        while(i < j){
            int moduleMass = arr[i] + arr[j];
            
            if(moduleMass <= limit){  
                    if(moduleMass > maxSum){
                        maxSum = max(maxSum, moduleMass);
                        ans.clear();
                        ans.push_back({arr[i], arr[j]});
                    }
                i++;
            } else if( moduleMass > limit){
                j--;
            } 
        }
        return ans;
    }



// A robot has two sorted arrays of sensor measurements, 
// collected by two different sensors:
// Find one value from each array whose sum is closest to target.

    vector<pair<int, int>> smallestEror(vector<int>& A, vector<int>& B, int target){

        int i = 0;
        int j = B.size()-1;
        vector<pair<int, int>> ans;
        int minError = INT32_MAX;

        while(i < A.size() && j >= 0){

            int sum = A[i] + B[j];

            int diff = abs(target - sum);

            if(sum > target){
                if(diff < minError){
                    minError = min(diff, minError);
                    ans.clear();
                    ans.push_back({A[i], B[j]});
                }
                j--;
            } else if(sum < target){
                if(diff < minError){
                    minError = min(diff, minError);
                    ans.clear();
                    ans.push_back({A[i], B[j]});
                }
                i++;
            } else if(sum == target){
                ans.push_back({A[i], B[j]});
                return ans;
            }
        }
        return ans;
    }



    // More Clean Code

    vector<pair<int, int>> NearestError(vector<int>& A, vector<int>& B, int target){

        int i = 0;
        int j = B.size()-1;
        vector<pair<int, int>> ans;
        int minError = INT32_MAX;

        while(i < A.size() && j >= 0){

            int sum = A[i] + B[j];
            int diff = abs(target - sum);

            if(diff < minError){
                minError = min(diff, minError);
                ans.clear();
                ans.push_back({A[i], B[j]});
            }

            if(sum == target){
                return ans;
            } else if(sum > target){
                j--;
            } else {
                i++;
            }

        }
        return ans;
    }




    int maximumWaterArea(vector<int> heights){

        int lp = 0;
        int rp = heights.size() - 1;
        int maxArea = 0;

        while(lp < rp){

            int width = rp - lp;
            int minHt = min(heights[rp], heights[lp]);

            int currArea = width * minHt;
            maxArea = max(currArea, maxArea);

            if(heights[lp] <= heights[rp]){
                lp++;
            } else {
                rp--;
            }
        }
        return maxArea;
    }




    int TrappedWater(vector<int>& height){

        int left = 0;
        int right = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;
        int water = 0;

        while(left < right){

            if(height[left] <= height[right]){

                leftMax = max(leftMax, height[left]);

                    if(height[left]<leftMax){
                        water += leftMax - height[left];
                    }

                left++;
            } else {

                rightMax = max(rightMax, height[right]);

                    if(height[right]< rightMax){
                        water += rightMax - height[right];
                    }
                right--;
            }

        }

        return water;
    }



    vector<int> mergeSortedArrays(vector<int> &nums1, int m, vector<int> &nums2, int n){

        int i = m -1;
        int j = n - 1;
        int k = m + n - 1;

        if(n == 0 && m == 0){
            return nums1;
        }
        while(j >= 0){

            if(i >= 0 && nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }
        return nums1;
    }


    void movingZeros(vector<int> &nums){

        int i = 0;
        int j = 1;

        if(nums.size() < 2){
            return;
        }

        while(j < nums.size()){

            if(nums[i] != 0){
                i++;
            }
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
            } 
            j++;

        }
    }
// Alternate approach...But moving something same at the end
    void ALTmovingzeroes(vector<int> &nums){
        int nextzero = 0;
        
        for(int curr = 0; curr< nums.size(); curr++){

            if(nums[curr] != 1){
                swap(nums[nextzero], nums[curr]);
                nextzero++;
            }
        }

    }


    bool palindrome(string s){

        
        int i = 0;
        int j = s.size() - 1;

        while(i < j){

            while(i < j && !isalnum(static_cast<unsigned char>(s[i]))){
                i++;
            }

            while(i < j && !isalnum(static_cast<unsigned char>(s[j]))){
                j--;
            } 

            if(tolower(static_cast<unsigned char>(s[i])) != tolower(static_cast<unsigned char>(s[j]))){
                return false;
            }
            i++;
            j--;
        }
        
        return true; 
    }


};

int main(){

    Solution obj;
    // vector<int> battery = {10, 15, 20, 25, 30, 35, 40};
    // int target = 55;
    // vector<pair<int, int>> ans = obj.pairTargets(battery, target);

    // for(auto pair: ans){
    //     cout<< pair.first << " " << pair.second<< endl;
    // }

    // vector<int> mass = {4, 8, 11, 15, 19, 23, 28};
    // int limit = 34;
    // vector<pair<int, int>> ans = obj.twoModulemasses(mass, limit);

    // for(auto p: ans){
    //     cout<< p.first << " "<< p.second << endl;
    // }



    // vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // cout<<"Max Area: "<< obj.maximumWaterArea(height);

    // vector<int> height = {10, 0, 3, 2, 7, 2};
    // cout<< "Max Water trapped: "<< obj.TrappedWater(height)<<endl;

    // vector<int> nums1 = {1,2,3,0,0,0};
    // int m = 3;
    // vector<int> nums2 = {2,4,6};
    // int n = 3;

    // obj.mergeSortedArrays(nums1, m, nums2, n);

    // for(int &val: nums1){
    //     cout<< val << " ";
    // }

    vector<int> nums = {0,0,1,0,3};

    // obj.movingZeros(nums);

    // for(int &val: nums){
    //     cout<< val << " ";
    //     }

    // vector<int> num1 = {1,0,1,2,3};
    // obj.ALTmovingzeroes(num1);

    // for(int &val: num1){
    //     cout<< val << " ";
    // }

    string s = "abcba";

    cout<< obj.palindrome(s);


}

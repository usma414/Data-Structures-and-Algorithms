#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int maximumArea(vector<int> hts){

        int i = 0;
        int j = hts.size() - 1;
        int currArea = 0;
        int maxArea = 0;

        while(i < j){

            int width = j - 1;
            int minHt = min(hts[i], hts[j]);

            currArea = width * minHt;
            maxArea = max(currArea, maxArea);

            if(hts[i] <= hts[j]){
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }


    int trappedWater(vector<int> arr){

        int left = 0;
        int right = arr.size()-1;
        int leftMax = 0;
        int rightMax = 0;
        int water = 0;

        while(left < right){

            if(arr[left]<=arr[right]){

                leftMax = max(leftMax, arr[left]);

                if(arr[left] < leftMax){
                    water += leftMax - arr[left];
                }

                left++;
            } else {

                rightMax = max(rightMax, arr[right]);

                if(arr[right]<rightMax){
                    water += rightMax - arr[right];
                }


                right--;
            }
        }
        return water;
    }


    int uniqueElements(vector<int> &nums){

        int i = 0;
        int count = 0;

        for(int j = 1; j < nums.size(); j++){

            if(nums.empty()){
                return 0;
            }

            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
                count++;
            }
        }
        return count;
    }

};





int main(){

    Solution obj;
    vector<int> hts = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<"Max Area: " << obj.maximumArea(hts)<< endl;

    vector<int> trappwaternums = {10, 0, 3, 2, 7, 2};
    cout<< obj.trappedWater(trappwaternums)<<endl;

   
}
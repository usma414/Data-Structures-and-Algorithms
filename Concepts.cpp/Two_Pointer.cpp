#include <iostream>
#include <vector>
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





};

int main(){

    Solution obj;
    // vector<int> battery = {10, 15, 20, 25, 30, 35, 40};
    // int target = 55;
    // vector<pair<int, int>> ans = obj.pairTargets(battery, target);

    // for(auto pair: ans){
    //     cout<< pair.first << " " << pair.second<< endl;
    // }

    vector<int> mass = {4, 8, 11, 15, 19, 23, 28};
    int limit = 34;
    vector<pair<int, int>> ans = obj.twoModulemasses(mass, limit);

    for(auto p: ans){
        cout<< p.first << " "<< p.second << endl;
    }
}

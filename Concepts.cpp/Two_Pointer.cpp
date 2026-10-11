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
};

int main(){

    Solution obj;
    vector<int> battery = {10, 15, 20, 25, 30, 35, 40};
    vector<pair<int, int>> ans = obj.pairTargets(battery, 55);

    for(auto pair: ans){
        cout<< pair.first << " " << pair.second<< endl;
    }
}

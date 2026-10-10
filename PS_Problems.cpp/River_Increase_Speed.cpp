#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

    int increaseBattery(vector<int> batteryLevels){

        int count = 0;
        for (int i = 0; i + 1 < batteryLevels.size() ; i++){
            // if(batteryLevels.empty() || batteryLevels.size() == 1){
            //     return 0;
            // }
            if(batteryLevels[i+1] > batteryLevels[i]){
                count++;
            }

        }
        return count;
    }

    int countingDecrease(vector<int> arr){

        int count = 0;
        for(int i = 0; i + 1 < arr.size(); ++i){

            int diff = arr[i] - arr[i+1];

            if(diff >= 15){
                count++;
            }
        }
        return count;
    }
};

int main(){

    Solution obj;
    vector<int> batteryLevels = {92, 87, 81, 84, 76, 70, 73, 65};
    vector<int> battery = {96, 93, 89, 72, 69, 65, 41, 38, 35};
    // cout<< "Count: "<< obj.increaseBattery(batteryLevels);
    cout<< "Count: " << obj.countingDecrease(battery);
}

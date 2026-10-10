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

    int consecutiveMinsRunover450(vector<int> arr){

        int currRun = 0;
        int maxRun = 0;
        for(int i = 0; i< arr.size(); i++) {

            if(arr.empty()){
                return 0;
            }
            if(arr[i]>=450){
                currRun +=1;
            }

            if(arr[i] < 450){
                currRun = 0;
            }

            maxRun = max(currRun, maxRun);
        }
        return maxRun;
    }
};

int main(){

    Solution obj;
    vector<int> batteryLevels = {92, 87, 81, 84, 76, 70, 73, 65};
    vector<int> battery = {96, 93, 89, 72, 69, 65, 41, 38, 35};
    vector<int> distance = {520, 610, 580, 450, 490, 300, 330, 510};
    // cout<< "Count: "<< obj.increaseBattery(batteryLevels);
    // cout<< "Count: " << obj.countingDecrease(battery);
    cout<< "Consecutive mins run over 450: "<< obj.consecutiveMinsRunover450(distance);
}

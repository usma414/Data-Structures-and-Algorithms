#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

    int binarySearch(vector<int> & arr, int target){

        int st = 0;
        int end = arr.size() - 1;

        while(st <= end){

            int mid = st + (end - st) / 2;

            if(arr[mid] == target){
                return mid;
            }

            if(target < arr[mid]){
                end = mid - 1;
            }

            if(target > arr[mid]){
                st = mid + 1;
            }
        }

        return -1;
    }

};

int main(){

    Solution obj;

    vector<int> nums = {11,22,23,44,45,76,77,98,99};

    cout<< obj.binarySearch(nums, 5) << endl;


}
#include <iostream>
#include <vector>
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


    int countcomparisonsValue(vector<int> &arr, int target){

        int st = 0;
        int end = arr.size() - 1;
        int count = 0;

            while(st <= end){
                
            int mid = st + (end - st)/2;
            

                if(arr[mid] == target){
                    count++;
                    return count;
                }

                if(arr[mid] < target){
                    count++;
                    st = mid + 1;
                    
                }

                if(arr[mid] > target){
                    count++;
                    end = mid - 1;
                }
            }

        return count;
    }

    int firstOccurence(vector<int> &arr, int target){

        int st = 0;
        int end = arr.size() - 1;
        int answer = 0;

        while(st <= end){

            int mid = st + (end - st)/2;

            if(arr[mid] == target){
                answer = mid;
                end = mid - 1;
            }

            if(arr[mid] < target){
                st = mid + 1;
            }

            if(arr[mid] > target){
                end = end - 1;
            }
        }

        return answer;
    }


    int lastOccurence(vector<int> &arr, int target){

        int st = 0;
        int end = arr.size() - 1;
        int lastans = 0;

        while(st <= end){

            int mid = st + (end - st)/ 2;

            if(arr[mid] == target){
                lastans = mid;
                st = mid + 1;
            }

            if(arr[mid] < target){
                st = mid  + 1;
            }

            if(arr[mid] > target){
                end = mid - 1;
            }
        }

        return lastans;
    }


    int coutOccurences(vector<int> &arr, int target){

        int st = 0;
        int end = arr.size() - 1;

    //     while(st <= end){

    //         int mid = st + (end - st)/2;

    //         if(arr[mid] == target){
    //             int first = firstOccurence(arr, target);
    //             int last = lastOccurence(arr, target);

    //             count = last - first + 1;
    //         }

    //         if(arr[mid] < target){
    //             st = mid + 1;
    //         } else if(arr[mid] > target){
    //             end = mid - 1;
    //         }
    //     }
    //     return count;

    // }

        int first = firstOccurence(arr, target);
        int last = lastOccurence(arr, target);

        if(first == -1){
            return 0;
        }

        int count = last - first + 1;

        return count;
    }

    int insertNumber(vector<int> & arr, int num){

        int st = 0;
        int end = arr.size() - 1;

        while(st <= end){

            int mid = st + (end - st)/2;
            if(num < arr[mid]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }

        }

        return st;

    }


    int searchRotatedArray(vector<int> &arr, int target){

        int st = 0;
        int end = arr.size() - 1;

        while(st <= end){

            int mid = st + (end - st)/2;

            if(arr[mid] == target){
                return mid;
            }

            if(arr[st] <= arr[mid]){

                if(target >= arr[st] && target <= arr[mid]){
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }

            } else {

                if(target >= arr[mid] && target <= arr[end]){
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;

    }


    int peakMountain(vector<int> &arr){

        int st = 1;
        int end = arr.size() - 2;

        while(st <= end){

            int mid = st + (end - st)/2;

            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
                return mid;
            } else if(arr[mid-1] < arr[mid]){
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    double nearestmin(vector<double> &arr, double target){

        int st = 0;
        int end = arr.size() - 1;

        while(st <= end){

            int mid = st + (end - st)/2;

            if(arr[mid] < target){
                st = mid + 1;
            } else {
                end = mid -1;
            }
        }

        if(st == 0)
        {
            return -1.0;
        }
        
        return arr[st -1];

    }


    int mountainPeak(vector<int> &nums){

        int st = 1;
        int end = nums.size() - 2;

        while(st <= end){

            int mid = st + (end - st)/2;

            if(nums[mid -1] < nums[mid] && nums[mid + 1] < nums[mid]){
                return mid;
            }else if(nums[mid -1] < nums[mid]){
                st = mid + 1;
            } else {
                end = mid - 1;
            } 
        }
        return -1;
    }
    

};

int main(){

    Solution obj;

    vector<int> nums = {11,22,23,44,45,76,77,98,99};
    vector<int> arr = {1,2,2,2,3,4};
    vector<int> insertnum = {1,3,4,5};
    vector<int> rotatedArr = {2,3,4,5,6,7,0,1};
    vector<int> mountainArr = {1,2,3,4,5,6,5,4,3,2,1};
    vector<double> lap_times = {87.12, 87.45, 87.89, 88.10, 88.35, 88.72, 89.01, 89.44};

    cout<< obj.binarySearch(nums, 22) << endl;
    cout<< obj.countcomparisonsValue(nums, 99) << endl;
    cout<< obj.firstOccurence(arr, 2) << endl;;
    cout<< obj.lastOccurence(arr, 2) << endl;
    cout<< obj.coutOccurences(arr, 2)<< endl;
    cout<< obj.insertNumber(nums, 89) << endl;
    cout<< obj.insertNumber(insertnum, 2)<< endl;
    cout<< obj.searchRotatedArray(rotatedArr, 0) << endl;
    cout<< "Mountain: "<< obj.peakMountain(mountainArr) << endl;
    cout<< obj.nearestmin(lap_times, 88.0) << endl;
    cout<< obj.mountainPeak(mountainArr)<< endl;


}



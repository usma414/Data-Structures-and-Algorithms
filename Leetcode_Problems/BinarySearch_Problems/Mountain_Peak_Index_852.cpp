
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:

    int SearchMountainPeakIndex(vector<int> arr) {

        int st = 1;
        int end = arr.size() - 2;

        while(st<= end) {

            int mid = st + (end-st)/2;

            if (arr[mid - 1] < arr[mid] && arr[mid+1] < arr[mid]) {
                return mid;
            } else if (arr[mid -1] < arr[mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main() {

    Solution obj;
    vector<int> arr = {0,1,2,3,4,5,6,7,4,3,2,1,0};
    cout<<obj.SearchMountainPeakIndex(arr) << endl;

}
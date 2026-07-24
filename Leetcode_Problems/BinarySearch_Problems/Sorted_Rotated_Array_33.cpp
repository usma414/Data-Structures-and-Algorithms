
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int Search(vector <int> arr, int tar ) {
        int st = 0;
        int end = arr.size() - 1;

        while(st<=end) {
            int mid = st + (end-st)/2;

            if(arr[mid] == tar) {
                return mid;
            }

            if (arr[st] <= arr[mid]) {      

                if(tar >= arr[st] && tar <= arr[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {

                if (tar >= arr[mid] && tar <= arr[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }

        }

        return -1;

    }
};


int main() {

    Solution obj;
    vector<int> arr = {2,3,4,5,0,1};
    cout<< obj.Search(arr, 0) << endl;
}
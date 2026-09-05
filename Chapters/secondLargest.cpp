#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> arr){

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i= 0; i <arr.size(); i++) {
        int curr = arr[i];

        if(curr > largest) {
            secondLargest = largest;
            largest = curr;
            
        }

        if ((curr < largest) && (curr > secondLargest)) {
            secondLargest = curr;
        }
    }

    return secondLargest;

}


vector<int> movezeros (vector<int> arr) {
    
    int j = 0;

    for(int i = 0; i< arr.size(); i++) {
        if(arr[i] != 0) {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;

}


bool pairSum(vector<int> arr, int target) {

    int i = 0;
    int j= arr.size()-1;

    while(i < j) {
    
        int sum = arr[i] + arr[j];

        if(sum == target) {
            return true;
        }

        if (sum < target) {
            i++;
        }

        if (sum > target){
            j--;
        }
    }
    return false;
}


bool isPalindrome(string s) {

    int i = 0;
    int j = s.size()-1;

    while(i < j) {
        if(s[i] != s[j]){
            return false;
        }
        
        i++;
        j--;
        
    }
    return true;
}


int main() {



}

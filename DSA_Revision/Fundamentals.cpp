//  Arrays Revision

#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

class Fundamentals{
public:

    int secondLargestvalue(vector<int> arr) {

        if(arr.size() <= 1) {
            cout << "Not enough numbers to pick secondLargest Maximum" << endl;
            return -1;
        }


        int largest = arr[0];
        int secondlargest = INT_MIN;

        for(int i = 1; i < arr.size(); i++) {


            if(arr[i] > largest) {
                secondlargest = largest;
                largest = arr[i];
            }

            if(arr[i] < largest && arr[i] > secondlargest) {
                secondlargest = arr[i];
            }
        }
        return secondlargest;
    }


    bool twoSum(vector<int> arr, int target) {


        if (arr.size() <= 1) {
            cout<< "Insufficient...Require atleast two numbers" << endl;
            return false;
        }

        int i = 0;
        int j = arr.size() - 1;

        while ((i < j)) {

            int sum = arr[i] + arr[j];

            if(sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            } else if(sum == target){
                return true;
            } 
        }  
        return false;
    }



    void moveZeroes(vector<int>& arr) {

        if(arr.size() <= 1) {
            cout<<"Not enough elements in the array" << endl;
            return;
        }
        int i = 0;
        int j = 0;

        while(j < arr.size()) {

            if(arr[j] == 0) {
                j++;
            } else {
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
        }
    }

    int maxSubArray(vector<int>& arr) {

        if(arr.empty()) {
            cout<< "Array empty" << endl;
            return -1;
        }

        int currSum = 0;
        int maxSum = arr[0];

        for(int i = 0; i < arr.size(); i++) {

            currSum += arr[i];
            maxSum = max(maxSum, currSum);

            if(currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }


    vector<int> productexceptSelf(vector<int>& arr) {

        vector<int> ans(arr.size());
        int prefix = 1;

        for(int i = 0; i < arr.size() ; i++) {
            ans[i] = prefix;
            prefix *= arr[i];
        }

        int suffix = 1;
        for(int i = arr.size()-1; i>=0; i--) {
            ans[i] = ans[i] * suffix;
            suffix *= arr[i];
        }
        return ans;
    }




    vector<int> productexceptself(vector<int> arr) {

        vector<int> ans(arr.size());
        int prefix = 1;

        for(int i = 0; i < arr.size(); i++) {
            ans[i] = prefix;
            prefix *= arr[i];
        }

        int suffix  = 1;

        for(int i = arr.size()-1; i>= 0; i--) {
            ans[i] = ans[i] * suffix;
            suffix *= arr[i];
        }
        return ans;
    }


    int firstelement(vector<int> arr) {

        unordered_map<int, int> m;

        for(int i = 0; i < arr.size(); i++) {

            m[arr[i]]++;
        }

        for(int i = 0; i< arr.size(); i++) {

            if(m[arr[i]] == 1) {
                return arr[i]; 
            } 
        }
        return -1;
    }

    int morethanonce(vector<int>& arr) {

        unordered_map<int, int> m;

        for(int i = 0; i < arr.size(); i++) {

            m[arr[i]]++;

            if(m[arr[i]] > 1) {
                return arr[i];
            }
        }
        return -1;
    }


    int findduplicate(vector<int>& arr) {

        sort(arr.begin(), arr.end());
        for(int i = 0; i< arr.size() -1; i++) {

            if(arr[i] == arr[i+1]) {
                return arr[i];
            }
        }
        return -1;
    }
};


int missingNumber(vector<int> arr) {

    int missingNum = 0;
    int actualSum = 0;
    int n = arr.size();
    int expectedSum = n * (n + 1)/ 2;

    for(int i = 0; i < n; i++) {

        actualSum += arr[i];

    }
    missingNum = expectedSum - actualSum;

    return missingNum;
}

void moveNegativeNums(vector<int>& arr) {

    int i = 0;
    int j = arr.size() - 1;

    while(i < j) {

        if(arr.size() < 1) {
            return;
        }
        if(arr[i] < 0) {
            i++;
        } else if (arr[j] >= 0) {
            j--;
        } else if(arr[i] >= 0 and arr[j] < 0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        
    }
    // Maps

    
    

}

int main() {

Fundamentals obj;

vector<int> arr = {10, 5, 8, 10, 3};

cout << obj.secondLargestvalue(arr);

    map<string, int> m;

    m["Laptop"] = 100;
    m["Tv"] = 120;
    m["Radio"] = 130;
    m["Watch"] = 110;

    // m.insert({"Mobile", 95});

    // for(auto p : m) {
    //     cout << p.first  << " " << p.second << endl;
    // }

    // if(m.find("Laptop") != m.end()) {
    //     cout << "Found" << endl;
    // } else {
    //     cout <<"Not Found" << endl;
    // }

    for(auto it = m.begin(); it != m.end; it++) {

        auto it = m.find("Laptop") 

        if(it != m.end()) {
            cout << "Found" << it->first << " " << it->second << endl;
        }
    }

}



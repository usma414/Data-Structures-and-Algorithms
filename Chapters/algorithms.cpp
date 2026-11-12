#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,4,5};
    stack<int> s;

    // for(int i = nums.size() - 1; i >= 0; i--){
    //     cout<< nums[i] << " ";
    // }

    // for(int i = 0; i < nums.size(); i++){

    //     s.push(nums[i]);
    // }

    // while(!s.empty()){
    //     int x = s.top();
    //     s.pop();
    //     nums.push_back(x);
    // }

    // cout<< endl;

    // for(int &val: nums){
    //     cout<< val<<" ";
    // }

    int i = 0;
    int j = nums.size() - 1;

    while(i < j){
        swap(nums[i], nums[j]);
        i++;
        j--;
    }

    for(int val: nums){
        cout<< val << " ";
    }

}
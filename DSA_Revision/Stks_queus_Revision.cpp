
#include <iostream>
#include <vector>
#include<stack>
using namespace std;

class Solution{
public:
    vector<int> prevSmallElement(vector<int> arr) {

        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = 0; i< arr.size(); i++) {

            while(s.size() > 0 && s.top() >= arr[i]) {
                s.pop();
            }

            if(s.empty()){
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }

            s.push(arr[i]);
        }

        return ans;
    }

    vector<int> prevGreaterElement(vector<int> arr) {

        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = 0; i < arr.size(); i++) {

            while(s.size() > 0 && s.top() <= arr[i]){
                s.pop();
            }

            if(s.empty()){
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }
        s.push(arr[i]);
        }

        return ans;
    }

    vector<int> nextSmallerElement(vector<int> arr) {

        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = arr.size()-1; i>=0; i--) {

            while(s.size() > 0  && s.top() >= arr[i]) {
                s.pop();
            }

            if(s.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }

            s.push(arr[i]);
        }

        return ans;

    }

    vector<int> nextGreatElement(vector<int> arr){

        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = arr.size()-1; i >= 0; i--){

            while(s.size() > 0 && s.top() <= arr[i]){
                s.top();
            }

            if(s.empty()){
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }

            s.push(arr[i]);
        }

        return ans;
    }
    
};

int main() {

    Solution obj;
    vector<int> arr = {4,5,2,7,1,0};
    vector<int> ans = obj.prevSmallElement(arr);
    vector<int> ans1 = obj.nextGreatElement(arr);

    for(int val: ans1) {
        cout<< val << " ";
    }


}
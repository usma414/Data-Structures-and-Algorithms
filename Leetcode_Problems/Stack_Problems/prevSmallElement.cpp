#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:

    vector<int> prevSmallElement(vector<int>& arr) {

        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = 0; i < arr.size(); i++) {

            while(s.size() > 0 && s.top() >= arr[i]) {
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

};

int main() {

    Solution obj;

    vector<int> arr = {3, 1, 0, 8, 6};

    vector<int> ans = obj.prevSmallElement(arr);

    for(int val: ans){
        cout << val << " ";
    }
}
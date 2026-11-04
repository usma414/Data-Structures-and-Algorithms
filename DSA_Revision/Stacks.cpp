
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

// class RevisionStack{
// public:

//     int bottom(stack<int>& s){

//         if(s.size() == 1){
//             return s.top();
//         }

//         int x = s.top();
//         s.pop();

//         int bott = bottom(s);

//         return bott;
//     }


//     void removeBottom(stack<int>& s){

//         if(s.size() == 1){
//             s.pop();
//             return;
//         }

//         int x = s.top();
//         s.pop();

//         removeBottom(s);

//         s.push(x);


//     }

//     void insertBottom(stack<int>& s, int y){

//         if(s.empty()){
//             s.push(y);
//             return;
//         }

//         int x = s.top();
//         s.pop();

//         insertBottom(s, y);

//         s.push(x);

//     }

//     void reverseStack(stack<int>& s){

//         if(s.empty()){
//             return;
//         }

//         int x = s.top();
//         s.pop();

//         reverseStack(s);

//         insertBottom(s, x);
    
//     }



//     void insertsorted(stack<int>& s ,int y){

//         if(s.empty()){
//             s.push(y);
//             return;
//         }

//         if(y <= s.top()){
//             s.push(y);
//             return;
//         }

//         int x = s.top();
//         s.pop();

//         insertsorted(s, y);

//         s.push(x);

//     }

//     void sortStack(stack<int>& s){

//         if(s.empty()){
//             return;
//         }

//         int a = s.top();
//         s.pop();

//         sortStack(s);

//         insertsorted(s, a);
//     }



//     void insertBotom(stack<int>& s, int y) {

//         if(s.empty()){
//             s.push(y);
//             return;
//         }

//         int x = s.top();
//         s.pop();

//         insertBotom(s, y);

//         s.push(x);
//     }


//     void reversStk(stack<int>& s){

//         if(s.empty()){
//             return;
//         }

//         int x = s.top();
//         s.pop();

//         reversStk(s);

//         insertBotom(s, x);

//     }
// };

// int main(){

//     // stack<int> s;
    
//     // for(int i = 0; i < 10; ++i){
//     //     s.push(i*2);
//     // }

//     // s.pop();
//     // cout<< s.top() << endl;
//     // cout<< s.top() << endl;
//     // s.pop();
//     // cout<< s.top() << endl;
//     // s.push(7);
//     // cout<< s.top() << endl;

//     // queue<int> s;
    
//     // for(int i = 0; i < 10; ++i){
//     //     s.push(i*2);
//     // }

//     // s.pop();
//     // cout<< s.front() << endl;
//     // cout<< s.front() << endl;
//     // s.pop();
//     // cout<< s.front() << endl;
//     // s.push(7);
//     // cout<< s.front() << endl;

//     RevisionStack rs;
//     stack<int> s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     // cout << "Bottom: "<< rs.bottom(s) << endl;
//     // rs.removeBottom(s);

//     // while(!s.empty()){
//     //     cout<<s.top()<< " ";
//     //     s.pop();
//     // }


//     // rs.insertBottom(s, 1);
//     // rs.reverseStack(s);
//     // rs.sortStack(s);
//     // rs.insertBotom(s, 70);
//     rs.reversStk(s);

//     while(!s.empty()){
//         cout<< s.top() << " ";
//         s.pop();
//     }
// }

#include <vector>
// Leetcode Problems practice

class lCprcStacks{
public:

    vector<int> previousNextElement(vector<int>& arr){

        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = 0; i < arr.size(); i++){

            while(s.size() > 0 && s.top() >= arr[i]){
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


    vector<int> nextGreaterElement(vector<int>& arr){

        vector<int> ans(arr.size());
        stack<int> s;

        for(int i = arr.size()-1; i >= 0; i--){

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
};

int main(){

    lCprcStacks ls;

    vector<int> nums = {2,4,3,7,1};

    vector<int> ans = ls.previousNextElement(nums);
    vector<int> nextans = ls.nextGreaterElement(nums);

    for(int val: ans){
        cout<< val << " ";
    }

    cout<< endl;

    for(int val: nextans){
        cout<< val << " ";
    }
}




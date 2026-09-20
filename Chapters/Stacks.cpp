
// #include <iostream>
// #include <vector>
// #include<stack>
// using namespace std;

// class Stack{

//     vector<int> v;

// public:

//     void push(int val){
//         v.push_back(val);
//     }

//     void pop(){
//         v.pop_back();
//     }

//     int top(){
//         return v[v.size() - 1];
//     }

//     bool empty() {
//         return v.size() == 0;
//     }

//     int getTop(stack<int> s) {
//         return s.top();
//     }

//     void emptyStack(stack<int> s) {
//         while(!s.empty()) {
//             cout << s.top() << " ";
//             s.pop();
//         }
//     }

//     void printStack(stack<int> s) {

//         while(!s.empty()) {
//             cout << s.top() << " ";
//             s.pop();
//         }
//     }

//     void removeBottom(stack<int> f) {
//         stack<int> n;
        
//         while(!f.empty()) {

//             int x = f.top();
//             f.pop();

//             if(!f.empty()) {
//                 n.push(x);
//             }
//         }

//         while(!n.empty()) {
//             int y = n.top();
//             n.pop();
//             f.push(y);
//         }

//         printStack(f);
//     }

//     void reverseStack(stack<int> s) {

//         stack<int> r;

//         while(!s.empty()) {
//             int x = s.top();
//             s.pop();
//             r.push(x);
//         }

//         printStack(r);
//     }

//     bool validParentheses(string s) {

//         stack<char> st;
    
//         for(char ch: s) {

//             if(ch == '(' || ch == '[' || ch == '{'){
//                 st.push(ch);

//             } else{
             
//                 if(!st.empty() && (ch == ')' && st.top() == '(')  || (ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '[')){
//                     st.pop();
//                 } else {
//                     return false;
//                 }
//             }
            
//         }
//         return st.empty();
//     }
// };

// int main() {

//     Stack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     stack<int> st;

//     st.push(10);
//     st.push(20);
//     st.push(30);
    
//     // cout<< s.getTop(st);
//     // s.removeBottom(st);
//     s.reverseStack(st);
//     return 0;

// }


#include <iostream>
#include <vector>
#include <stack>
using namespace std;


class MyStack{
private:
    vector<int> data;

public:

    void push(int x) {
        data.push_back(x);
    }

    void pop(){
        data.pop_back();
    }

    int top() {
        return data[data.size() - 1];
    }

    bool empty() {
        return data.size() == 0;
    }

    int bottom(stack<int>& s) {

        if(s.size() == 1){
            return s.top();
        }

        int x = s.top();
        s.pop();

        int result = bottom(s);

        s.push(x);

        return result;
    }

    void removeBottom(stack<int>& s) {

        if(s.size() == 1) {
            s.pop();
            return;
        }

        int x = s.top();
        s.pop();

        removeBottom(s);

        s.push(x);
    }

    void reverseStack(stack<int> s) {

        if(s.empty()) {
            return;
        }

        int x = s.top();
        s.pop();

    
        reverseStack(s);
        
        insertBottom(s, x);

    }

    // void insertBottom(stack<int>& s, int y) {

    //     if(s.empty()) {
    //         s.push(y);
    //         return;
    //     }

    //     int x = s.top();
    //     s.pop();

    //     insertBottom(s, y);

    //     s.push(x);

    // }



    void insertBottom(stack<int>& s, int y) {

        if(s.empty()){
            s.push(y);
            return;
        }

        int x = s.top();
        s.pop();

        insertBottom(s, y);

        s.push(x);
    }

    void reverseStk(stack<int>& s) {

        if(s.empty()) {
            return;
        }

        int x = s.top();
        s.pop();

        reverseStk(s);

        insertBottom(s, x);
    }

    
    void removemiddle(stack<int>& s, int count, int middle) {

        
        if(middle == count) {
            s.pop();
            return;
        }

        int x = s.top();
        s.pop();

        
        removemiddle(s, count + 1, middle);

        s.push(x);
    }

    void removebottom(stack<int>& s) {

        if (s.size() == 1) {
            s.pop();
            return;
        }

        int x = s.top();
        s.pop();

        removebottom(s);

        s.push(x);
    }

    int evaluatePostFix(string exp){

        stack<int> s;

        for(int i = 0; i < exp.size(); i++) {

            if (exp[i] == ' '){
                continue;
            }

            if((exp[i] != '+') && (exp[i] != '-') && (exp[i] != '/') && (exp[i] != '*') ) {
                int num = exp[i] - '0';
                s.push(num);
            }
            
            if(exp[i] == '+') {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();

                int sum = a + b;
                s.push(sum);
            }

            if(exp[i] == '-') {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();

                int sub = b - a;
                s.push(sub);
            }

            if(exp[i] == '*') {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();

                int prod = a * b;
                s.push(prod);
            }

            if(exp[i] == '/'){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();

                int quotient = b / a;
                s.push(quotient);
            }
        }   
        return s.top();
    }


};

int main() {

    MyStack ms;

    // ms.push(1);
    // ms.push(2);
    // ms.push(3);
    // ms.push(4);
    // ms.pop();
    
    stack<int> sr;

    sr.push(1);
    sr.push(2);
    sr.push(3);
    sr.push(4);
    // ms.removeBottom(sr);

    // while (!ms.empty())
    // {
    //     cout<< ms.top() << " ";
    //     ms.pop();
    // }

    cout<< ms.evaluatePostFix("8 2 3 + * 4 -") << endl;
    cout<< ms.evaluatePostFix("20 5 / 2 -") << endl;
    
}

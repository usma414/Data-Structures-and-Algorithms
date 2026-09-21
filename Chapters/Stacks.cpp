
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

            if(isdigit(exp[i])) {

                int num = 0;
                while(i < exp.size() && isdigit(exp[i])) {

                    num = num * 10 + (exp[i] - '0');
                    i++;
                }

                s.push(num);
                i--;
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

    void sortStack(stack<int>& s) {

            if(s.empty()){
                return;
            }

            int a = s.top();
            s.pop();
            
            sortStack(s);

            insertsorted(s, a);
        
    }


    void insertsorted(stack<int>& s, int y) {

        if (s.empty()){
            s.push(y);
            return;
        }

        if(y <= s.top()){
            s.push(y);
            return;
        }

        int x = s.top();
        s.pop();

        insertsorted(s, y);

        s.push(x);
    }


};





class MinStack{

private:
    stack<int> s;
    stack<int> mins;

public:

    void push(int x) {

        if(mins.empty()){
            mins.push(x);
        } else if(x <= mins.top()) {
            mins.push(x);
        }

        s.push(x);

    }

    void pop() {

        if(s.empty()) {
            return;
        }

        if(s.top() == mins.top()) {
            mins.pop();
        }

        s.pop();
    }

    int getMin() {

        if(mins.empty()) {
            return 0;
        } else{
            return mins.top();
        }


    }
};


int main() {

    // MyStack ms;

    // ms.push(1);
    // ms.push(2);
    // ms.push(3);
    // ms.push(4);
    // ms.pop();
    
    // stack<int> sr;

    // sr.push(1);
    // sr.push(2);
    // sr.push(3);
    // sr.push(4);
    // ms.removeBottom(sr);

    // while (!ms.empty())
    // {
    //     cout<< ms.top() << " ";
    //     ms.pop();
    // }

    // cout<< ms.evaluatePostFix("8 2 3 + * 4 -") << endl;
    // cout<< ms.evaluatePostFix("20 5 / 2 -") << endl;
    // cout<< ms.evaluatePostFix("12 3 * 4 +") << endl;
    // cout<< ms.evaluatePostFix("100 20 / 5 2 * -") << endl;
    // cout<< ms.evaluatePostFix("15 3 2 + * 10 -") << endl;
    // cout<< ms.evaluatePostFix("25 5 2 + / 3 4 * -") << endl;



    MinStack m;

    m.push(8);
    m.push(3);
    m.push(5);
    m.push(2);
    m.pop();
    m.push(1);
    m.pop();

    cout << m.getMin() << endl;


}

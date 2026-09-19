
#include <iostream>
#include <vector>
#include<stack>
using namespace std;

class Stack{

    vector<int> v;

public:

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size() - 1];
    }

    bool empty() {
        return v.size() == 0;
    }

    int getTop(stack<int> s) {
        return s.top();
    }

    void emptyStack(stack<int> s) {
        while(!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }

    void printStack(stack<int> s) {

        while(!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }

    void removeBottom(stack<int> f) {
        stack<int> n;
        
        while(!f.empty()) {

            int x = f.top();
            f.pop();

            if(!f.empty()) {
                n.push(x);
            }
        }

        while(!n.empty()) {
            int y = n.top();
            n.pop();
            f.push(y);
        }

        printStack(f);
    }

    void reverseStack(stack<int> s) {

        stack<int> r;

        while(!s.empty()) {
            int x = s.top();
            s.pop();
            r.push(x);
        }

        printStack(r);
    }

    bool validParentheses(string s) {

        stack<char> st;
    
        for(char ch: s) {

            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);

            } else{
             
                if(!st.empty() && (ch == ')' && st.top() == '(')  || (ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '[')){
                    st.pop();
                } else {
                    return false;
                }
            }
            
        }
        return st.empty();
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    
    // cout<< s.getTop(st);
    // s.removeBottom(st);
    s.reverseStack(st);
    return 0;

}
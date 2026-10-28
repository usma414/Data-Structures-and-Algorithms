
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){

    // stack<int> s;
    
    // for(int i = 0; i < 10; ++i){
    //     s.push(i*2);
    // }

    // s.pop();
    // cout<< s.top() << endl;
    // cout<< s.top() << endl;
    // s.pop();
    // cout<< s.top() << endl;
    // s.push(7);
    // cout<< s.top() << endl;

    queue<int> s;
    
    for(int i = 0; i < 10; ++i){
        s.push(i*2);
    }

    s.pop();
    cout<< s.front() << endl;
    cout<< s.front() << endl;
    s.pop();
    cout<< s.front() << endl;
    s.push(7);
    cout<< s.front() << endl;

}


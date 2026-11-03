
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class RevisionStack{
public:

    int bottom(stack<int>& s){

        if(s.size() == 1){
            return s.top();
        }

        int x = s.top();
        s.pop();

        int bott = bottom(s);

        return bott;
    }


    void removeBottom(stack<int>& s){

        if(s.size() == 1){
            s.pop();
            return;
        }

        int x = s.top();
        s.pop();

        removeBottom(s);

        s.push(x);


    }

};

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

    // queue<int> s;
    
    // for(int i = 0; i < 10; ++i){
    //     s.push(i*2);
    // }

    // s.pop();
    // cout<< s.front() << endl;
    // cout<< s.front() << endl;
    // s.pop();
    // cout<< s.front() << endl;
    // s.push(7);
    // cout<< s.front() << endl;

    RevisionStack rs;
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Bottom: "<< rs.bottom(s) << endl;
    rs.removeBottom(s);

    while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }

}


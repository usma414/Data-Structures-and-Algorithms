#include <iostream>
#include<list>
using namespace std;

class Node{
public:     
    int data;
    Node* next;  

    Node(int val){
        data = val;
        next = NULL;
    }

};

class List{
private:

    Node* head;
    Node* tail;

public:

    List(){
        head = tail = NULL;
    }

    void push_front(int val){

        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void push_back(int val){

        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    
    }

    void printll(){

        if(head == NULL){
            cout<< "List is Empty" << endl;
            return;
        }

        Node* temp  = head;

        while(temp != NULL){
            cout<< temp->data << " ";
            temp = temp->next;
        }
    }


    void pop_back(){

        if(head == NULL){
            cout<<"List is empty"<< endl;
            return;
        }

        Node* temp = head;

        while(temp->next != tail){
            temp = temp->next;
        }

        if(head == tail){
            delete head;
            head = tail =NULL;
            return;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;

    }

    void pop_front(){

        if(head == NULL){
            cout<< "Empty"<< endl;
        }

        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
        
    }


    void insert(int val, int pos ){


        if(pos < 0){
            cout<<"Invalid Position"<< endl;
            return;
        }

        if(pos == 0){
            push_front(val);
        }

        Node* temp = head;

        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout<< "Invalid Position" << endl;
                return;
            }

            temp = temp->next;
        }

        Node* newNode =  new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;
    }
};

int main(){

    List ll;
    ll.push_front(34);
    ll.push_back(12);
    ll.push_back(11);
    ll.pop_back();
    ll.printll();
    cout<< endl;
    // ll.pop_front();
    ll.insert(45, 2);
    ll.printll();
    
}

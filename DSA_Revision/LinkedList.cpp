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


    void insert(int data, int pos){

        if(pos<0){
            cout<< "Invalid Position"<< endl;
            return;
        }

        if(pos == 0){
            push_front(data);
            return;
        }

        Node*newNode = new Node(data);
        Node* temp = head;

        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout<< "Invalid position" <<endl;
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

    }


    void search(int val){

        if(head == NULL){
            cout<< "List is empty" << endl;
        }

        Node* temp = head;
        int i = 0;
        while(temp != NULL){

            if(temp->data == val){
                cout<< temp->data << " found at Node "<< i + 1<< endl;
            }
            i++;
            temp = temp->next;
        }
    }


    void reverse(){

        if(head == NULL){
            cout<< "Empty" << endl;
            return;
        }

        if(head->next == NULL){
            cout<< "Only one node" << endl;
            return;
        }

        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }


    int middleOfLinkedList(){

        Node* fast = head;
        Node* slow = head;

        while(fast != NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
    }


    void remove(int val){

        if(head ==  NULL){
            cout<<"List is empty"<<endl;
            return;
        }

        if(val == head->data){
            pop_back();
        }

        Node* curr =head;
        Node* prev = NULL;

        while(curr != NULL && curr->data != val){

            prev = curr;
            curr = curr->next;
        }

        if(curr == NULL){
            return;
        }

        prev->next = curr->next;

        if(curr == tail){
            tail = prev;
            return;
        }

        delete curr;
        
    }

    void CycleDetection(){

        Node* slow = head;
        Node* fast = head;
        bool cycleExists = false;

        while(fast != NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cycleExists = true;
                break;
            }
        }
        
        if(!cycleExists){
            return;
        }

        slow = head;

        
        while(fast!= NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next;

            if(slow == fast){
                cout<< "Point found from where the loop starts" << endl;
                return;
            }
        }

    }

};

int main(){

    // List ll;
    // ll.push_front(34);
    // ll.push_back(12);
    // ll.push_back(11);
    // ll.pop_back();
    // ll.printll();
    // cout<< endl;
    // // ll.pop_front();
    // ll.insert(45, 2);
    // ll.printll();
    // cout<< endl;
    // ll.search(45);
    // ll.reverse();
    // cout << endl;
    // ll.printll();
    // cout<< endl;
    // cout<<"Middle of Linked List: "<< ll.middleOfLinkedList()<< endl;
    // ll.insert(33,0);
    // ll.printll();
    // cout << endl;
    // ll.remove(12);
    // ll.printll();

    List ll;
    ll.push_back(10);
    ll.push_back(12);
    ll.push_back(14);
    ll.push_back(16);

    // cout << ll.hasCycle();
    
}

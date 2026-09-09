// #include <iostream>
// using namespace std;

// class Node {
// public:

//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List {

//     Node* head;
//     Node* tail;

// public:
//     List() {
//         head = tail = NULL;
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val);

//         if(head == NULL) {
//             head= tail = newNode;
//             return;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }

//     void printll() {

//         Node* temp = head;
//         while(temp != NULL){
//             cout<< temp->data << " ";
//             temp = temp->next;
//         }
//         return;
//     }


//     void push_back(int val) {
//         Node* newNode = new Node(val);

//         if(head == NULL) {
//             head = tail = NULL;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }
// };

// int main() {
//     List ll;
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//     ll.push_back(4);
//     ll.printll();
// }

// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
    
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List{

//     Node* head;
//     Node* tail;
// public:
//     List(){
//         head = tail = NULL;
//     }

//     void push_front(int val) {

//         Node* newNode = new Node(val);

//         if(head == NULL) {
//             head = tail = newNode;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }


//     void printll() {

//         Node* temp = head;

//         while(temp != NULL) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout<< endl;
//     }

//     void push_back(int val) {
//         Node* newNode = new Node(val);

//         if(head == NULL) {
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     void pop_front() {

//         if(head == NULL) {
//             cout<< "Linked List is empty"<< endl;
//         } 


//             Node* temp = head;
//             head = head->next;
//             temp->next = NULL;

//             if(head == NULL){
//                 tail = NULL;
//             }

//             delete temp;

            
        
//     }

//     void pop_back() {


//         if(head == NULL) {
//             cout<< "Empty";
//             return;
//         }

//         if(head == tail){
//             delete head;
//             head = tail = NULL;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != tail) {
//             temp = temp->next;
//         }

//         temp->next = NULL;
//         delete tail;
//         tail = temp;

//     }

//     void insert(int val, int pos) {

//         if(pos < 0) {
//             cout<< "Invalid"<< endl;
//             return;
//         }


//         if(pos == 0){
//             push_front(val);
//         }

//         Node* temp = head;
//         for(int i = 0; i < pos - 1; i++){
//             if(temp == NULL){
//                 cout<< "Invalid Position"<< endl;
//                 return;
//             }
//             temp = temp->next;
//         }
//         Node* newNode = new Node(val);

//         newNode->next = temp->next;
//         temp->next = newNode;
        
//     }


//     void search(int val){

//         if(head == NULL){
//             cout<< "Linked List empty"<<endl;
//         }

//         Node* temp = head;
//         int i = 0;

//         while(temp != NULL) {
//             if(temp->data == val){
//                 cout<< "Found at index: "<< i<< endl;
//                 return;
//             }
//             temp = temp->next;
//             i++;
//         }
//         cout<< "Not Found: -1"<< endl;
//     }

//     void reverse() {

//         Node* curr = head;
//         Node* prev = NULL;
//         Node* next = NULL;

//         while(curr != NULL){
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         head = prev;
//     }


// };




// int main() {
//     List ll;

//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_back(3);

    
//     ll.insert(4,2);
    
//     ll.reverse();
//     ll.printll();
    


// }


/**
 
    void reverse() {
        Node* curr = head;
        Node* prev = NULL;
        Node* curr = NULL;

        while( curr != NULL) {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next
        }
        head = prev;
    }
 **/



#include <iostream>
using namespace std;

class Node {
public:

    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }

};

class List{

    Node* head;
    Node* tail;

public:

    List() {
        head = tail = NULL;
    }

    void push_front(int val){

        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;

    }

    void printll(){
        if(head == NULL) {
            cout<<"Linked List is empty"<< endl;
        }

        Node* temp = head;

        while (temp != NULL)
        {
            cout<< temp->data << " ";
            temp = temp->next;
        }
        return;
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

    void pop_front(){

        if(head == NULL){
            cout<< "Empty Linked List" << endl;
        }

        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    // void reverse() {

    //     Node* curr = head;
    //     Node* prev = NULL;
    //     Node* next = NULL;

    //     while(curr != NULL) {
    //         next = curr->next;
    //         curr->next = prev;

    //         prev = curr;
    //         curr = next;
    //     }

    //     head = prev;
    // }

    // int middle() {

    //     Node* slow = head;
    //     Node* fast = head;

    //     while (fast != NULL && fast->next != NULL)
    //     {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }

    //     return slow->data;
    // }

    // void insert(int val, int pos) {

    //     if (pos < 0) {
    //         cout<< "Invalid Position" << endl;
    //     }

    //     if(pos == 0) {
    //         push_front(val);
    //     }

    //     Node* temp = head;
    //     for(int i = 0; i < pos - 1; i++) {
    //         temp = temp->next;
    //     }

    //     Node* newNode = new Node(val);

    //     newNode->next = temp->next;
    //     temp->next = newNode;

    // }

    int middle() {

        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            
        }

    return slow->data;
    }

    // void remove(int val) {

    //     if(head->data == val) {
    //         pop_front();
    //         return;
    //     }

    //     Node* curr = head;
    //     Node* prev = NULL;

    //     while(curr->data != val && curr != NULL) {

    //         prev = curr;
    //         curr = curr->next;
            
    //     }

    //     prev->next = curr->next;
    //     delete curr;

    //     if (curr->next == NULL){
    //         tail = prev;
    //         delete curr;
    //     }
    // }



    // void remove(int val) {

    //     if(head == NULL) {
    //         cout<< "List empty" << endl;
    //         return;
    //     }

    //     if(head->data == val) {
    //         pop_front();
    //         return;
    //     }

    //     Node* curr = head;
    //     Node* prev = NULL;

    //     while( curr != NULL && curr->data != val ) {

    //         prev = curr;
    //         curr = curr->next;
    //     }

    //     if(curr == NULL) {
    //         return;
    //     }

    //     prev->next = curr->next;

    //     if(curr == tail) {
    //         tail = prev;
    //     }
    //     delete curr;
    // }


    void remove(int val){

        if(head == NULL) {
            cout<<"List is empty" << endl;
            return;
        }

        if (head->data == val){
            pop_front();
            return;
        }

        Node* curr = head;
        Node* prev = NULL;

        if(curr != NULL && curr->data != val){

            prev = curr;
            curr = curr->next;
        }

        if(curr == NULL ){
            return;
        }

        prev->next = curr->next;

        if(curr == tail) {
            tail = prev;
            return;
        }

        delete curr;

    }


    void reverse() {

        if(head == NULL) {
            cout<< "List is empty"<< endl;
            return;
        }

        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(curr != NULL) {

            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void insert(int val, int pos) {

        if(pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if(head == NULL) {
            push_front(val);
            return;
        }

        Node* temp = head;

        for(int i = 0 ; i < pos - 1; i++) {
            temp = temp->next;
        }

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;

    }


    void movetomiddle() {

        if(head == NULL) {
            cout<< "List is empty" << endl;
            return;
        }

        if(head->next == NULL ) {
            cout<<"No middle of list...Atleast 2 values/nodes in the list" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;
        Node* prev = head;

        while(fast != NULL && fast->next != NULL) {

            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(slow == tail) {
            tail = prev;
        }

        prev->next = slow->next;

        slow->next = head;
        head = slow;


    }



    void movelasttofirst() {

        if(head == NULL) {
            cout<<"Empty list" << endl;
            return;
        }

        if(head->next == NULL) {
            cout<< "List should contain atleast 2 values/nodes" << endl;
            return;
        }

        Node* prev = head;

        while(prev->next != tail) {
            prev = prev->next;
        }

        prev->next = NULL;

        tail->next = head;
        head = tail;
        tail = prev;
    }


    void swapheadwithtail() {

        if(head == NULL) {
            cout<< "List is empty"<< endl;
            return;
        }

        if(head->next == NULL) {
            cout<< "Atleast 2 nodes" << endl;
            return;
        }

        Node* second = head->next;
        Node* oldhead = head;
        Node* prev = head;

        while(prev->next != tail) {
            prev = prev->next;
        }


        if(head->next == tail) {
            tail->next = prev;
            head = tail;
            tail = prev;
            tail->next = NULL;
            return;
        }

        tail->next = second;
        prev->next = head;

        head = tail;
        tail = oldhead;

        tail->next = NULL;
    }



    bool hasCycle() {
       
        Node* fast = head;
        Node* slow = head;

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return true;
            }

            
        }
        return false;
    }


    int kthFromEnd(int k) {

        if(head == NULL){
            cout<< "List is empty" << endl;
            return -1;
        }


        Node* first = head;
        Node* second = head;

        first = first->next->next;

        for(int i = 0; i < k; i++) {

            if(first == NULL) {
                return -1;
            }

            first = first->next;

        }

        
        // test change
        while(first != NULL) {
            first = first->next;
            second = second->next;
        }

        return second->data;

    }


    void removeCycle() {
        
        if(head == NULL) {
            cout<< "Linked list is empty" << endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;
        bool hasCycle = false;

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                hasCycle = true;
                break;
            }
        }

        if(!hasCycle) {
            return;
        }

        slow = head; 

        if(slow == fast) {

            while(fast->next != slow) {
                fast = fast->next;
            }

            fast->next = NULL;
            tail = fast;
            return;
        }

        Node* prev = NULL;

        while(slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }

        prev->next = NULL;
        return;
    }



    int kfromEnd(int k) {

        if(head == NULL) {
            cout<<"List is empty" << endl;
            return -1;
        }

        Node* first = head;
        Node* second = head;

        for(int i = 0; i < k; i++) {
            
            if(first == NULL){
                return -1;
            }

            first = first->next;
        }

        while(first != NULL) {
            first = first->next;
            second = second->next;
        }

        return second->data;

    }

};

int main() {

    List ll;

    ll.push_back(1);
    ll.push_front(2);
    ll.push_back(3);
    ll.insert(9,1);
   
    // ll.printll();

    
    // ll.remove(2);
    // ll.reverse();
    ll.insert(6, 2);

    // ll.printll();
    // cout<< endl << "Middle: " << ll.middle() << endl;
    // ll.movetomiddle();
    // cout<< endl;
    // ll.movelasttofirst();
    // ll.printll();
    // cout<< endl;
    // ll.movelasttofirst();
    ll.printll();
    cout<< endl;
    ll.swapheadwithtail();
    ll.printll();
    cout<< endl;
    cout << ll.hasCycle();
    ll.kthFromEnd(3);

    
    
}





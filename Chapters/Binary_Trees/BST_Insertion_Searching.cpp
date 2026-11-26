#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// class Node{
// public:
     
//     int data;
//     Node* right;
//     Node* left;

//     Node(int val){
//         data = val;
//         right = left = NULL;
//     }
// };


// Node* insert(Node* root, int val){

//     if(root == NULL){
//         return new Node(val);
//     }

//     if(val < root->data){
//         root->left = insert(root->left, val);
//     } else {
//         root->right = insert(root->right, val);
//     }

//     return root;
// }


// Node* buildBST(vector<int> arr){

//     Node* root = NULL;

//     for(int val: arr){
//         root = insert(root, val);
//     }

//     return root;
// }

// void inorderTraversal(Node* root){

//     if(root == NULL){
//         return;
//     }

//     inorderTraversal(root->left);
//     cout<< root->data << " ";
//     inorderTraversal(root->right);
// }


// int main(){

//     vector<int> arr = {3,2,1,5,6,4};

//     Node* root = buildBST(arr);

//     inorderTraversal(root);
//     cout<< endl;
//     return 0;
// }



class Node{
public:

    int data;
    Node* right;
    Node* left;

    Node(int val){
        data = val;
        right = left = NULL;
    }
};


Node* insert(Node* root, int val){

    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left, val);
    } else{
        root->right = insert(root->right, val);
    }

    return root;
}

Node* buildBST(vector<int> arr){

    Node* root = NULL;

    for(int val: arr){
        root = insert(root, val);
    }

    return root;
}

void inorderTraversal(Node* root){

    if(root == NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<< root->data << " ";
    inorderTraversal(root->right);
}

bool Search(Node* root, int key){

    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(root->data > key){
        return Search(root->left, key);
    } else {
        return Search(root->right, key);
    }
}

Node* getInorderSuccessor(Node* root){         //left most node in right subtree
    while(root != NULL && root->left != NULL){
        root = root->left;
    }

    return root;
}

Node* delNode(Node* root, int key){

    if(root == NULL){
        return NULL;
    }

    if(key < root->data){
        root->left = delNode(root->left, key);
    } else if(key > root->data){
        root->right = delNode(root->right, key);
    } else {

        // root->data == key..This where deletion comes in
        // 1 and 2 condition combined

        if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        } else if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        } else{
            // 3 condition....2 children
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
        }
    }
    return root;

}

int main(){

    vector<int> arr = {4,2,5,6,8,9};

    Node* root = buildBST(arr);
    // cout<< root->data << endl;

    cout<< "Before: "<< endl;
    inorderTraversal(root);
    cout<< endl;

    cout<<"After: "<< endl;
    delNode(root, 5);
    inorderTraversal(root);
    cout<< endl;

    // cout<< Search(root, 7);
}
#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

// class Node{
// public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         right = left = NULL;
//     }
// };

// static int idx = -1;

// Node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx] == -1){
//         return NULL;
//     }

//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);

//     return root;
// }

// class Node{
// public: 

//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         right = left = NULL;
//     }
// };

// static int idx = -1;

// Node* buildTree(vector<int> preorder){
//     idx++;

//     if(preorder[idx] == -1){
//         return NULL;
//     }

//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);

//     return root;
// }

// int main(){

//     vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

//     Node* root = buildTree(preOrder);
//     cout<< root->data << endl;
//     cout<< root->right->right->data;

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

static int idx = -1;

Node* buildTree(vector<int> &preorder){

    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    
    return root;
}

// void preOrderTraversal(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout<< root->data << " ";
//     preOrderTraversal(root->left);
//     preOrderTraversal(root->right);
// }

// int main(){

//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

//     Node* root = buildTree(preorder);
//     // cout<< "Root: "<< root->data << endl;
//     // cout<< "Left Node: "<< root->left->data << endl;
//     // cout<< "Right Node: "<< root->right->data << endl;

//     preOrderTraversal(root);
//     cout<< endl;
// }
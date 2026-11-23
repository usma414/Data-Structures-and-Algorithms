#include <iostream>
#include <vector> 
#include <algorithm>
#include <queue>
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

// static int idx = -1;

// Node* buildTree(vector<int> &preorder){

//     idx++;

//     if(preorder[idx] == -1){
//         return NULL;
//     }

//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder);
//     root->right = buildTree(preorder);
    
//     return root;
// }

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

// void traversepreorder(Node* root){       //Root - Left - Right

//     if(root == NULL){
//         return;
//     }

//     cout<< root->data << " ";
//     traversepreorder(root->left);
//     traversepreorder(root->right);
// }


// void inorderTraversal(Node* root){      //Left - Root - Right
//     if(root == NULL){
//         return;
//     }

//     inorderTraversal(root->left);
//     cout<< root->data << " ";
//     inorderTraversal(root->right);
// }

// void postorderTraversal(Node* root){    //Left - Left - Right 

//     if(root == NULL){
//         return;
//     }

//     postorderTraversal(root->left);
//     postorderTraversal(root->right);
//     cout<< root->data << " ";
// }


// void rightTraversal(Node* root){       //Right - Root - Left
//     if(root == NULL){
//         return;
//     }

//     rightTraversal(root->right);
//     cout<< root->data << " ";
//     rightTraversal(root->left);

// }

// int main(){

//     // vector<int> preorder = {1,-1,-1,2,-1,3,4,-1,-1};
//     vector<int> po = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

//     Node* root = buildTree(po);

//     cout<< "PreOrder Traversal" << endl;
//     traversepreorder(root);
//     cout<< endl;

//     cout<< "Inorder Traversal" << endl;
//     inorderTraversal(root);
//     cout<<endl;

//     cout<< "Post Traversal" << endl;
//     postorderTraversal(root);
//     cout<< endl;

//     cout<< "Right Traversal"<< endl;
//     rightTraversal(root);
//     cout<< endl;
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


// void preOrderTraversal(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout<< root->data << " ";
//     preOrderTraverse(root->left);
//     preOrderTraverse(root->right);
// }

// void inOrderTraversal(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inOrderTraversal(root->left);
//     cout<< root->data << " ";
//     inOrderTraversal(root->right);

// }

// void postOrderTraversal(Node* root){
//     if(root == NULL){
//         return;
//     }

//     postOrderTraversal(root->left);
//     postOrderTraversal(root->right);
//     cout<< root->data << " ";
// }


// int main(){

//     vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

//     Node* root = buildTree(preorder);

//     cout<< "Pre Order Traversal" << endl;
//     preOrderTraversal(root);
//     cout<< endl;

//     cout<< "In Order Traversal" << endl;
//     inOrderTraversal(root);
//     cout<< endl;

//     cout<< "Post Order Traversal" << endl;
//     postOrderTraversal(root);
//     cout<< endl;
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

Node* buildTree(vector<int> preorder){

    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;

}


void preorderTraversal(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


void levelTraversal(Node* root){

    queue<Node*> q;

    q.push(root);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            
            if(!q.empty()){
                cout<< endl;
                q.push(NULL);
                continue;
            } else {
                break;
            }
        }

        cout<< curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }



}


int main(){

    vector<int> preo = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preo);

    preorderTraversal(root);
    cout<< endl;
    levelTraversal(root);
}
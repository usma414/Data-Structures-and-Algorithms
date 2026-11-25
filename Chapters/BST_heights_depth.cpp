#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
public:

    int data;
    Node* left;
    Node* right;

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


int treeHeight(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftHt = treeHeight(root->left);
    int rightHt = treeHeight(root->right);

    return max(leftHt, rightHt) + 1;
}

int countNodes(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    return leftCount + rightCount + 1;
}

int sumOfNodes(Node* root){

    int sumLeft = 0;
    int sumRight = 0;

    if(root == NULL){
        return 0;
    }

    sumLeft += sumOfNodes(root->left);
    sumRight += sumOfNodes(root->right);

    return sumLeft + sumRight + root->data;
}


int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout << "Height: "<< treeHeight(root) << endl;
    cout << "Total number of Nodes: "<< countNodes(root) << endl;
    cout<< "Sum of Nodes: "<< sumOfNodes(root)<< endl;
}
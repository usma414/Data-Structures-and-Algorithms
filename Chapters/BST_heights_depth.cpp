#include<iostream
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
}

static int idx = -1;

Node* buildTree(vector<int> preorder){

    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(val);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}


int treeHeight(Node* root){

    if(root == NULL){
        return 0;
    }

    leftHt = treeHeight(root->left);
    rightHt = treeHeight(root->right);

    return max(leftHt, rightHt) + 1;
}


int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout << "Height: "<< treeHeight(rrot) << endl;
}
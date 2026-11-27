#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

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



Node* buildTree(vector<int> preorder, int &idx){

    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}


bool isIdentical(Node* p, Node* q){

    if(p == NULL || q == NULL){
        return p == q;
    }

    bool leftIdentical = isIdentical(p->left, q->left);
    bool rightIdentical = isIdentical(p->right, q->right);

    return leftIdentical && rightIdentical && p->data == q->data ;
}


bool isIdentical(Node* a, Node* b){

    if(a == NULL|| b == NULL) {
        return a == b;
    } 

    bool leftIdentical = isIdentical(a->left, b->left);
    bool rigtIdentical = isIdentical(a->right, b->right);

    return leftIdentical && rightIdentical && a->data == b->data; 

}

bool isSubtree(Node* tree, Node* subtree){

    


}

int main(){

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    int idx1 = -1;
    Node* p = buildTree(preorder, idx1);
    int idx2 = -1;
    Node* q = buildTree(preorder, idx2);

    cout<< "Printing" << endl;
    cout << isIdentical(p, q);

}
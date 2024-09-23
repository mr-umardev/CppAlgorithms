#include<iostream>
using namespace std;
struct Tree{
    int data;
    Tree* left;
    Tree* right;
};
Tree* newTree(int data){
    Tree* branch=new Tree;
    branch->data=data;
    branch->left=branch->right=NULL;
}
void insertInorder(struct Tree* cur){
    if(cur==NULL){
        return;
    }
    else{
        
        insertInorder(cur->left);
        
        insertInorder(cur->right);
        cout<<cur->data<<" ";
    }
}
int main(){
    struct Tree* root=new Tree();
    root->left=newTree(1);
    root->right=newTree(2);
    root->left->left=newTree(3);
    root->left->right=newTree(4);
    root->right->left=newTree(5);
    root->right->right=newTree(6);
    cout<<"Inorder traversal of binary tree is:"<<endl;
    insertInorder(root);
    return 0;
}
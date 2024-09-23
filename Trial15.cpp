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
    return branch;
}
void printInorder(struct Tree* cur){
    if(cur==NULL){
        return;
    }
    printInorder(cur->left);
    cout<<cur->data<<" ";
    printInorder(cur->right);
}
int main(){
    struct Tree* root= newTree(1);
    root->left=newTree(2);
    root->right=newTree(3);
    root->left->left=newTree(4);
    root->left->right=newTree(5);
    cout<<"Inorder traversal of binary tree is"<<endl;
    printInorder(root);
    return 0;

}

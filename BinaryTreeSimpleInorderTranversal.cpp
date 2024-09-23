#include<iostream>
using namespace std;
struct Tree{
    int data;
    Tree* left;
    Tree* right;
};
    Tree *newTree(int data){
        Tree* root=new Tree;
        root->data=data;
        root->left = root->right=NULL;
        return root;
    }
    void printOrder(Tree*  cur){
        if(cur==NULL){
            return;
        }
            printOrder(cur->left);
            cout<<cur->data<<" ";
            printOrder(cur->right);
        }

    int main(){
        Tree* root1=newTree(1);
        root1->left=newTree(2);
        root1->right=newTree(3);
        root1->left->left=newTree(4);
        root1->left->right=newTree(5);
        cout<<"Inorder tranversal of binary tree is \n";
        printOrder(root1);
        return 0;
    }
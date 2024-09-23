#include<iostream>
using namespace std;
class Tree{
    int data;
    Tree* left;
    Tree* right;
    public:
    Tree(){}
     Tree(int data){
        Tree* root= new Tree1;
        root->data=data;
        root->left=root->right=NULL;
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
        Tree* root1=Tree1(1);
        root1->left=Tree1(2);
        root1->right=Tree1(3);
        root1->left->left=Tree1(4);
        root1->left->right=Tree1(5);
        cout<<"Inorder tranversal of binary tree is \n";
        printOrder(Tree1);
        return 0;
    }
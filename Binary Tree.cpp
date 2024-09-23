#include<iostream>
using namespace std;
class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    void display(){
        cout<<data<<endl;
    }
};
int main(){
    Tree *root=new Tree(1);
    root->left=new Tree(2);
    root->right=new Tree(3);
    root->left->left=new Tree(4);
    root->right->right=new Tree(5);
    return 0;
}
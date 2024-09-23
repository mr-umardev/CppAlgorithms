#include<iostream>
using namespace std;
class Tree{
    public:
    int data;
    Tree *right;
    Tree *left;
    Tree(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};
int main(){
    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left=new Tree(4);
    return 0;
}

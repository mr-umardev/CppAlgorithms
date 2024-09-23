#include<iostream>
using namespace std;

class Tree {
    int data;
    Tree* left;
    Tree* right;

public:
    Tree() : data(0), left(NULL), right(NULL) {}

    Tree(int data) {
        this->data = data;
        this->left = this->right = NULL;
    }

    void setLeft(Tree* node) {
        left = node;
    }

    void setRight(Tree* node) {
        right = node;
    }

    void printOrder(Tree* cur) {
        if (cur == NULL) {
            return;
        }
        printOrder(cur->left);
        cout << cur->data << " ";
        printOrder(cur->right);
    }
};

int main() {
    Tree* root1 = new Tree(1);
    root1->setLeft(new Tree(2));
    root1->setRight(new Tree(3));
    root1->setLeft(new Tree(4));
    root1->setRight(new Tree(5));

    cout << "Inorder traversal of binary tree is \n";
    root1->printOrder(root1);
    return 0;
}

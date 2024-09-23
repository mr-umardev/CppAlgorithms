#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }


};
int main()
{
    int n=0;
    cout<<"Enter no of nodes :"<<endl;
    cin>>n;
    cout<<"Enter values :";
    for(int i=0;i<n;i++)
    {
    Node *node = new Node(i);

    }
    while(temp!=0)
    {
    cout<<node->data<<endl;
    }
}

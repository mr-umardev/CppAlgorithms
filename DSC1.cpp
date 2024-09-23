#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    void push1(int newdata, Node *&head);
    void display(Node *head);
};
void Node::push1(int newdata,Node *&head)
{
   
    Node* newnode= new Node();
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
    
}
void Node::display(Node *head)
{
    Node *ptr=head;
    if(ptr!=NULL)
    {
    cout<<ptr->data<<endl;
    ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
     int n;
    cout<<"Enter no of values :"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        head->push1(value, head);
    }
    
    

    

    // Display the linked list
    head->display(head);

    return 0;
}
#include<stdio.h>
#define maxsize 4

int front=-1,rear=-1;

void insertqueue(int a[],int item)
{
    if((rear+1)%maxsize==front)
    {
        printf("Queue full.Cannot insert.\n");
    }
    else if(front == -1)
    {
        front=0;
        rear=0;
        a[front]=item;
        printf("Element inserted is %d\n",item);
    }
    else
    {
        rear=(rear+1)%maxsize;
        a[rear]=item;
        
    }
}
void deletequeue(int a[])
{
    int item;
    if(front==-1)
    {
        printf("Queue empty\n");
    }
    else if(front==rear)
    {
        item=a[front];
        printf("Deleted element is %d\n",item);
        front=-1;
        rear=-1;
    }
    else{
        item=a[front];
        printf("Deleted element is %d\n",item);
        front=(front+1)%maxsize;
    }
}
int main()
{
    int a[maxsize];
    insertqueue(a,4);
    insertqueue(a,5);
    insertqueue(a,6);
    deletequeue(a);
    deletequeue(a);
    deletequeue(a);
}
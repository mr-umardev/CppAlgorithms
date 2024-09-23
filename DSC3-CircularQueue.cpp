#include<stdio.h>
#define maxsize 4

int front = -1, rear = -1;

void insertqueue(int a[], int item)
{
    if ((rear + 1) % maxsize == front)
    {
        printf("Queue is full. Cannot insert.\n");
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        a[rear] = item;
    }
    else
    {
        rear = (rear + 1) % maxsize;
        a[rear] = item;
    }
}

void deletequeue(int a[])
{
    int item;
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else if (front == rear)
    {
        item = a[front];
        printf("Deleted Element is %d\n", item);
        front = -1;
        rear = -1;
    }
    else
    {
        item = a[front];
        printf("Deleted Element is %d\n", item);
        front = (front + 1) % maxsize;
    }
}

int main()
{
    int a[maxsize];

    // Example usage
    insertqueue(a, 1);
    insertqueue(a, 2);
    insertqueue(a, 3);

    deletequeue(a);
    deletequeue(a);
    deletequeue(a);

    return 0;
}

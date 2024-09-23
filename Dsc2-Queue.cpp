#include<stdio.h>
#define max_size 4

int front = -1, rear = -1; 

void insertqueue(int a[], int item) {
    if (rear == max_size - 1)
    {
        printf("Queue is full. Cannot insert.\n");
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        a[rear] = item;
         printf("Element %d inserted.\n", item);
    }
    else{
        a[++rear] = item;
        printf("Element %d inserted.\n", item);
    }
}

void deletequeue(int a[]) {
    if (front == -1){
        printf("Deletion is not possible. Queue is empty.\n");
    }
    else {
        printf("Deleted element is %d.\n", a[front]);
        (front == rear) ? front = rear = -1 : front++;
    }
}

void displayqueue(int a[]) {
    if (front == -1){
        printf("Queue is empty.\n");
    }
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
}

int main() {
    int a[max_size], choice, element;

    do {
        printf("\nMenu:\n1. Insert 2. Delete 3. Display 4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        while(getchar()!='\n');

        switch (choice) {
            case 1: printf("Enter the element to insert: "); scanf("%d", &element); insertqueue(a, element); break;
            case 2: deletequeue(a); break;
            case 3: displayqueue(a); break;
            case 4: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

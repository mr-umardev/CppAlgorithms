#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void insertSorted(struct Node** head, int data) {
    struct Node* newNode = createNode(data);

    if (*head == NULL || data < (*head)->data) {
        
        newNode->next = *head;
        *head = newNode;
    } else {
        
        struct Node* current = *head;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        
        newNode->next = current->next;
        current->next = newNode;
    }
}


void printList(struct Node* head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


void freeList(struct Node** head) {
    struct Node* current = *head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL; 
}


int main() {
    struct Node* head = NULL; 
    insertSorted(&head, 3);
    insertSorted(&head, 1);
    insertSorted(&head, 2);
    insertSorted(&head, 5);

    
    printList(head);

    
    freeList(&head);

    return 0;
}

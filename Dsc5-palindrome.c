#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Define a structure for a stack
struct Stack {
    int top;
    char* array;
};

// Function to create an empty stack
struct Stack* createStack(int size) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->array = (char*)malloc(size * sizeof(char));
    return stack;
}

// Function to push a character onto the stack
void push(struct Stack* stack, char c) {
    stack->array[++stack->top] = c;
}

// Function to pop a character from the stack
char pop(struct Stack* stack) {
    return stack->array[stack->top--];
}

// Function to check if a string is a palindrome
int isPalindrome(char* str) {
    int len = strlen(str);
    struct Stack* stack = createStack(len);

    // Push the first half of the string onto the stack
    for (int i = 0; i < len / 2; ++i) {
        push(stack, tolower(str[i]));
    }

    // Pop and compare with the second half of the string
    int start = (len + 1) / 2;
    for (int i = start; i < len; ++i) {
        if (tolower(str[i]) != pop(stack)) {
            free(stack->array);
            free(stack);
            return 0; // Not a palindrome
        }
    }

    free(stack->array);
    free(stack);
    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

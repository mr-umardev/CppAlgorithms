#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int top = -1;
char arr[MAX_SIZE][MAX_SIZE];

void push(char *c) {
    top++;
    strcpy(arr[top], c);
}

char *pop() {
    return arr[top--];
}

void postfixToInfix(char *postfix, char *infix) {
    int length = strlen(postfix);
    char op[2] = "";
    op[1] = '\0';

    for (int i = 0; i < length; i++) {
        if (postfix[i] >= 'a' && postfix[i] <= 'z') {
            op[0] = postfix[i];
            push(op);
        } else {
            char *op2 = pop();
            char *op1 = pop();
            sprintf(infix, "(%s%c%s)", op1, postfix[i], op2);
            push(infix);
        }
    }
}

int main() {
    char postfix[MAX_SIZE];
    char infix[MAX_SIZE];

    printf("Enter your postfix expression: ");
    scanf("%s", postfix);

    postfixToInfix(postfix, infix);

    printf("Infix expression: %s\n", infix);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int main() {
    char postfix[MAX];
    char* stack[MAX];  // Stack to store infix expressions as strings
    int top = -1, i = 0;
    
    printf("Enter postfix expression: ");
    fgets(postfix, MAX, stdin);
    
    // Remove newline
    if (postfix[strlen(postfix) - 1] == '\n') {
        postfix[strlen(postfix) - 1] = '\0';
    }
    
    while (postfix[i] != '\0') {
        char c = postfix[i];
        
        // If operand, push to stack
        if (isalnum(c)) {
            char* operand = (char*)malloc(MAX * sizeof(char));
            sprintf(operand, "%c", c);
            stack[++top] = operand;
        }
        // If operator
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            if (top >= 1) {
                char* op2 = stack[top--];
                char* op1 = stack[top--];
                
                char* infix = (char*)malloc(MAX * sizeof(char));
                sprintf(infix, "(%s%c%s)", op1, c, op2);
                
                stack[++top] = infix;
                
                free(op1);
                free(op2);
            }
        }
        
        i++;
    }
    
    if (top >= 0) {
        printf("Infix expression: %s\n", stack[top]);
        free(stack[top]);
    }
    
    return 0;
}
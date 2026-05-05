#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char infix[MAX], postfix[MAX];
    char stack[MAX];
    int top = -1, i = 0, j = 0;
    
    printf("Enter infix expression: ");
    fgets(infix, MAX, stdin);
    
    // Remove newline
    if (infix[strlen(infix) - 1] == '\n') {
        infix[strlen(infix) - 1] = '\0';
    }
    
    while (infix[i] != '\0') {
        char c = infix[i];
        
        // If operand, add to postfix
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            postfix[j++] = c;
            postfix[j++] = ' ';
        }
        // If opening bracket, push to stack
        else if (c == '(') {
            stack[++top] = c;
        }
        // If closing bracket, pop until opening bracket
        else if (c == ')') {
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
                postfix[j++] = ' ';
            }
            top--;  // Remove opening bracket
        }
        // If operator
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            // Pop operators with higher or equal precedence
            while (top >= 0 && stack[top] != '(') {
                char op = stack[top];
                int prec_c = (c == '+' || c == '-') ? 1 : (c == '*' || c == '/') ? 2 : 3;
                int prec_op = (op == '+' || op == '-') ? 1 : (op == '*' || op == '/') ? 2 : 3;
                
                if (prec_op >= prec_c) {
                    postfix[j++] = stack[top--];
                    postfix[j++] = ' ';
                } else {
                    break;
                }
            }
            stack[++top] = c;
        }
        
        i++;
    }
    
    // Pop all remaining operators
    while (top >= 0) {
        postfix[j++] = stack[top--];
        postfix[j++] = ' ';
    }
    
    postfix[j] = '\0';
    
    printf("\nInfix   : %s\n", infix);
    printf("Postfix : %s\n", postfix);
    
    return 0;
}
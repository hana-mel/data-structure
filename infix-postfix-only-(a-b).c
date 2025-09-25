#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) 
{
    stack[++top] = ch; 
}
char pop() 
{
    return stack[top--]; 
}
char peek() 
{
    return stack[top];
}

int isEmpty() 
{
    return top == -1;
}

int priority(char ch)
{
    if (ch == '+') return 1;
    return 0;
}

int isOperand(char ch) 
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void infixtopostfix(char infix[])
{
    char postfix[MAX];
    int i = 0, j = 0;
    char ch;
    while ((ch = infix[i++]) != '\0') 
    {
        if (isOperand(ch)) 
        {
            postfix[j++] = ch; 
        }
        else if (ch == '(') 
        {
            push(ch);
        }
        else if (ch == ')') 
        {
            while (!isEmpty() && peek() != '(')
                postfix[j++] = pop();
            pop(); 
        }
        else 
        { // Operator
            while (!isEmpty() && priority(peek()) >= priority(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }
    while (!isEmpty())
        postfix[j++] = pop();
    postfix[j] = '\0';

    printf("Postfix: %s\n", postfix);
}

int main()
{
    char expr[MAX];
    printf("Enter infix expression:");
    scanf("%s", expr);
    infixtopostfix(expr);
    return 0;
}

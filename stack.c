// 1 - Write a menu-driven program to perform the PUSH, POP, and Traverse operations on a stack implemented using an array.

/*#include <stdio.h>
#define N 100
int stack[N];
int top = -1;

void push(int value)
{
    if (top == N - 1)
        printf("Stack Overflow\n");
    else
    {
        top = top + 1;
        stack[top] = value;
        printf("Element %d pushed to stack\n", value);
    }
}

void pop()
{
    int value;
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        value = stack[top];
        printf("Element %d popped from stack\n",value);
        top = top - 1;
    }
}

void traverse()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}*/

// 2 -WAP to reverse any string using a stack.

/*#include <stdio.h>
#include <string.h>
#define N 100
char stack[N];
int top = -1;
void push(char value)
{
    if (top == N - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

char pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
        return stack[top--];
}

void reverseString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        push(str[i]);
    for (int i = 0; i < len; i++)
        str[i] = pop();
}

int main()
{
    char str[N];
    printf("Enter a string: ");
    fgets(str, N, stdin);
    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}*/

// 3 -WAP to evaluate any arithmetic expression written in postfix notation using a stack.

/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 100
int stack[N];
int top = -1;
void push(int value)
{
    if (top == N - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
        return stack[top--];
}

int evaluatePostfix(char *expression)
{
    int len = strlen(expression);
    for (int i = 0; i < len; i++)
    {
        if (isdigit(expression[i]))
        {
            push(expression[i] - '0');
        }
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            int operand2 = pop();
            int operand1 = pop();
            int result;
            switch (expression[i])
            {
            case '+':
                result = operand1 + operand2;
                break;
            case '-':
                result = operand1 - operand2;
                break;
            case '*':
                result = operand1 * operand2;
                break;
            case '/':
                result = operand1 / operand2;
                break;
            }
            push(result);
        }
    }
    return pop();
}

int main()
{
    char expression[N];
    printf("Enter a postfix expression: ");
    fgets(expression, N, stdin);
    // Remove newline character from fgets
    expression[strcspn(expression, "\n")] = '\0';
    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);
    return 0;
}*/

// 4 - WAP to check the validity of any expression containing nested parenthesis using a stack.

/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define N 100

char stack[N];
int top = -1;

void push(char value)
{
    if (top == N - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
        return stack[top--];
}

bool isValidExpression(char *expression)
{
    int len = strlen(expression);
    for (int i = 0; i < len; i++)
    {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
        {
            push(expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
        {
            if (top == -1)
                return false;

            char topChar = pop();
            if ((expression[i] == ')' && topChar != '(') ||
                (expression[i] == ']' && topChar != '[') ||
                (expression[i] == '}' && topChar != '{'))
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main()
{
    char expression[N];
    printf("Enter an expression: ");
    fgets(expression, N, stdin);
    // Remove newline character from fgets
    expression[strcspn(expression, "\n")] = '\0';
    if (isValidExpression(expression))
        printf("Expression is valid\n");
    else
        printf("Expression is not valid\n");

    return 0;
}*/
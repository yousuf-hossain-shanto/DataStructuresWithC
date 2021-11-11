#include <stdio.h>
#define SIZE 7

char stack[SIZE];
int top = -1;

void push()
{
    if (top >= (SIZE - 1))
    {
        printf("Stack overflow\n");
    }
    else
    {
        char x;
        printf("Enter char to push:");
        scanf(" %c", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Popped element is %c\n", stack[top]);
        top--;
    }
}

void printStack()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%c\t", stack[i]);
        }
    }
    printf("\n");
}

int main()
{
    int command;
    do
    {
        printf("\nHelp:: Enter '1' to push, Enter '2' to pop, Enter '3' to print, Enter '4' to exit\n");
        printf("Enter command:=>");
        scanf("%d", &command);

        switch (command)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printStack();
            break;
        case 4:
            return 0;
            break;

        default:
            printf("Invalid command\n");
            break;
        }
    } while (command <= 3);

    return 0;
}
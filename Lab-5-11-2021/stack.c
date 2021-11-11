#include <stdio.h>
#define SIZE 7

int stack[SIZE], top = -1;

void push()
{
    if (top >= (SIZE - 1))
    {
        printf("Stack overflow\n");
    }
    else
    {
        int x;
        printf("Enter digit to push: ");
        scanf("%d", &x);
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
        if (stack[top] == 123)
        {
            top--;
            printf("In case of 123, our top is %d\n", top);
        }
        else
        {
            top--;
        }
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
            printf("%d\t", stack[i]);
        }
    }
    printf("\n");
}

int main()
{
    int command;
    do
    {
        printf("Enter '1' to push\nEnter '2' to pop\nEnter '3' to print\nEnter '4' to exit\n");
        printf("Enter command: ");
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
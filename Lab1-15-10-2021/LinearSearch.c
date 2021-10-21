#include <stdio.h>

void printArr(int size, int printable[])
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", printable[i]);
        if (i != (size - 1))
        {
            printf(", ");
        }
    }

    printf("]");
}

int main()
{
    int size, n;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("How many element you want to add now: ");
    scanf("%d", &n);

    //Scanning and building array
    int searchableArr[size];
    printf("Help: position => value\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d => ", i + 1);
        scanf("%d", &searchableArr[i]);
    }
    printf("Items added successfully. Current array: ");
    printArr(n, searchableArr);
    printf("\n");

    // Applying Linear Search
    int searchKey;
    printf("Enter your search key: ");
    scanf("%d", &searchKey);

    int foundPos = -1;

    for (int i = 0; i < n; i++)
    {
        if (searchKey == searchableArr[i])
        {
            foundPos = i;
            break;
        }
    }

    // Printing Final Result
    if (foundPos != -1)
    {
        printf("%d found into %d position", searchKey, foundPos + 1);
    }
    else
    {
        printf("Not Found");
    }

    printf("\n"); //Only For My OS
    return 0;
}
#include <stdio.h>

int main()
{
    char searchableArr[100];
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    //Scanning and building array
    for (int i = 0; i < n; i++)
    {
        printf("%d=>", (i + 1));
        scanf(" %c", &searchableArr[i]);
    }

    // Applying Linear Search
    char searchKey;
    printf("Enter your search key: ");
    scanf(" %c", &searchKey);

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
        printf("%c found into %d position", searchKey, foundPos + 1);
    }
    else
    {
        printf("Not Found");
    }

    printf("\n"); //Only For My OS
    return 0;
}
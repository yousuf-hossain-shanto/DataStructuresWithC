#include <stdio.h>

int main()
{
    int searchableArr[100], n, searchKey;
    printf("Enter array size: ");
    scanf("%d", &n);

    // Array Building
    for (int i = 0; i < n; i++)
    {
        printf("%d=>", i);
        scanf("%d", &searchableArr[i]);
    }

    // Applying Binary Search
    printf("Enter search key: ");
    scanf("%d", &searchKey);

    int startIndex = 0, endIndex = n - 1, midIndex, foundPos = -1;
    while (startIndex <= endIndex)
    {
        midIndex = 1 + ((startIndex + endIndex) / 2);

        if (searchableArr[midIndex] == searchKey)
        {
            foundPos = midIndex;
            break;
        }

        if (searchKey > searchableArr[midIndex])
        {
            startIndex = midIndex + 1;
        }

        if (searchKey < searchableArr[midIndex])
        {
            endIndex = midIndex - 1;
        }
    }

    if (foundPos != -1)
    {
        printf("%d found at %d position", searchKey, foundPos);
    }
    else
    {
        printf("Not Found");
    }

    printf("\n"); //Only for my os
    return 0;
}
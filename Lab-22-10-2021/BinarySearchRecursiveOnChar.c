#include <stdio.h>

int binarySearch(char pArr[], char searchKey, int startEn, int endEn)
{
    if (startEn <= endEn)
    {
        int mid = (startEn + endEn) / 2;
        if (searchKey == pArr[mid])
            return mid;

        if (searchKey < pArr[mid])
        {
            return binarySearch(pArr, searchKey, startEn, mid - 1);
        }
        return binarySearch(pArr, searchKey, mid + 1, endEn);
    }
    return -1;
}

int main()
{
    char searchableArr[100], x;
    int n;
    printf("Enter array size=>");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d=>", i);
        scanf(" %c", &searchableArr[i]);
    }

    printf("Enter search key =>");
    scanf(" %c", &x);
    // Binary Search
    int result = binarySearch(searchableArr, x, 0, n - 1);
    if (result != -1)
    {
        printf("%c found at %d position", x, result);
    }
    else
    {
        printf("Not Found");
    }

    printf("\n");
    return 0;
}
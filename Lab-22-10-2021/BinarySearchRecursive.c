#include <stdio.h>

int binarySearch(int pArr[], int searchKey, int startEn, int endEn)
{
    if (startEn <= endEn)
    {
        int mid = 1 + ((startEn + endEn) / 2);
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
    int searchableArr[100], n, x;
    printf("Enter array size=>");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d=>", i);
        scanf("%d", &searchableArr[i]);
    }

    printf("Enter search key => ");
    scanf("%d", &x);
    // Binary Search
    int result = binarySearch(searchableArr, x, 0, n - 1);
    if (result != -1)
    {
        printf("%d found at %d position", x, result);
    }
    else
    {
        printf("Not Found");
    }

    printf("\n");
    return 0;
}
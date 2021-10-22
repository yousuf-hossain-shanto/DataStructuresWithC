#include <stdio.h>

int linearSearch(int mainArr[], int count, int search, int currentIndex)
{
    if (currentIndex < count)
    {
        if (mainArr[currentIndex] == search)
            return currentIndex;
        return linearSearch(mainArr, count, search, currentIndex + 1);
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

    // Linear Search
    int result = linearSearch(searchableArr, n, x, 0);

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
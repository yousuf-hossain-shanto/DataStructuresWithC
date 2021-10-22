#include <stdio.h>

int linearSearch(char mainArr[], int count, char search, int currentIndex)
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

    // Linear Search
    int result = linearSearch(searchableArr, n, x, 0);

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
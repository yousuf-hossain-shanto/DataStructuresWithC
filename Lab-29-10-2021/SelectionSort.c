#include <stdio.h>

int main()
{
    int arr[100], n, minIndex, i, j, temp;
    printf("Enter array size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%dth element=>", i);
        scanf("%d", &arr[i]);
    }

    // Appling Selection Sort
    for (i = 0; i < n; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
}
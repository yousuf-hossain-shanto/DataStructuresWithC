#include <stdio.h>

int main()
{
    int arr[100], n, compareItem, temp, i, j;
    printf("Enter array size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%dth element=>", i);
        scanf("%d", &arr[i]);
    }

    // Appling InsertionSort
    for (i = 1; i < n; i++)
    {
        compareItem = arr[i];

        for (j = i - 1; j >= 0; j--)
        {
            if (compareItem < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = compareItem;
    }

    printf("Sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
    return 0;
}
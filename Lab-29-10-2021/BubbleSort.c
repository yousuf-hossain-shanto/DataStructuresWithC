#include <stdio.h>

int main()
{
    int arr[100], n;
    printf("Enter array size: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%dth element=>", i);
        scanf("%d", &arr[i]);
    }

    // Appling BubbleSort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
    return 0;
}
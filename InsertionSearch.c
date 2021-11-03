#include <stdio.h>

int main()
{
    int array[] = {77, 33, 44, 11, 88, 22, 66, 55, 99};
    int n = 9, c, d, t, flag = 0;

    for (c = 1; c <= n - 1; c++)
    {
        t = array[c];

        for (d = c - 1; d >= 0; d--)
        {
            if (array[d] > t)
            {
                array[d + 1] = array[d];
                flag = 1;
            }
            else
                break;
        }
        if (flag)
            array[d + 1] = t;
    }

    printf("Sorteded array:\n");

    for (c = 0; c <= n - 1; c++)
    {
        printf("%d\n", array[c]);
    }

    return 0;
}
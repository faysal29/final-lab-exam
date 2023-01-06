#include <stdio.h>
#include <string.h>

int main()
{
    int j, i, n, temp;
    scanf("%d", &n);
    int array[n], array2[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array2[i] < array2[j])
            {
                temp = array2[i];
                array2[i] = array2[j];
                array2[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i] - array2[i]);
    }
    printf("\n");
    return 0;
}
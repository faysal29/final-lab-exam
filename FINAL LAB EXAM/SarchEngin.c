#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int n, s, flag = 1;
        scanf("%d", &n);
        int array[n + 1];
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &array[j]);
        }
        scanf("%d", &s);
        for (j = 1; j <= n; j++)
        {
            if (array[j] == s)
            {
                printf("Case %i: %d\n", i, j);
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("Case %d: Not Found\n", i);
    }
    return 0;
}
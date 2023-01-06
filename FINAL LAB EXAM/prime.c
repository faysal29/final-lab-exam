#include <stdio.h>
int main()
{
    int t, l, r, i;
    scanf("%d", &t);
    int flag = 0;
    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &l, &r);
        for (int j = l; j <= r; j++)
        {
            for (int k = 2; k < j; k++)
            {
                if (j == 1 || j == 2)
                {
                    printf("%d ", j);
                }
                else if (j % k == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
                printf("%d ", j);

            flag = 0;
        }
        printf("\n");
    }

    return 0;
}
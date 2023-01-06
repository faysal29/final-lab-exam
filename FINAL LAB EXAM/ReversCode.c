#include <stdio.h>
#include <string.h>
int main()
{
    int t,i, n;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        while (n)
        {
            printf("%c", (n % 10) + 64);
            n = n / 10;
        }
        printf("\n");
    }
    return 0;
}
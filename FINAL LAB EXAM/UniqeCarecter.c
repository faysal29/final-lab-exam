#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, count = 0, result = 0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            result++;
        }
        count = 0;
    }
    printf("%d\n", result);
    return 0;
}
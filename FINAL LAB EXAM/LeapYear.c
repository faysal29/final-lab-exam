#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x % 400 == 0)
        printf("Yes");
    else if (x % 100 == 0)
        printf("No");
    else if (x % 4 == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}
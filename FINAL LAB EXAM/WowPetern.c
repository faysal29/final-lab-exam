// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= n - 1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2 * i - 1; k++)
//         {
//             if (i % 2 == 0)
//                 printf("*");
//             else
//                 printf("^");
//         }
//         printf("\n");
//     }
//     return 0;
// }
//  main.c
//  funciton
//  Created by Md Abdur Rahim on 11/23/22.

#include <stdio.h>

int find_gcd(int n, int m);
int find_lcm(int n, int m);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("gcm of %d %d is : %d\n", a, b, find_gcd(a, b));
    printf("lcm of %d %d is : %d\n", a, b, find_lcm(a, b));
    return 0;
}

// function for gcm

int find_gcd(int n, int m)
{
    int s, l;
    if (n > m)
    {
        l = n;
        s = m;
    }
    else
    {
        l = m;
        s = n;
    }
    for (int i = s; i >= 1; i--)
    {
        if (s % i == 0 && l % i == 0)
            return i;
    }
    return 0;
}

// function for lcm

int find_lcm(int n, int m)
{
    int ans;
    ans = (n * m) / find_gcd(n, m);
    return ans;
}
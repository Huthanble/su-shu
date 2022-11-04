#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int decompose(int n)
{
    int a = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(n - i))
            {
                printf("%d=%d+%d\n", n, i, n - i);
                a++;
            }
        }
    }
    if (a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
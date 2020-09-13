#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int MaxNumber = 25;
    int isPrime[MaxNumber];
    int i;
    int x;

    // 初始化MaxNumber数组
    for (i = 0; i < MaxNumber; i++)
    {
        isPrime[i] = 1;
    }

    for (x = 2; x < MaxNumber; x++)
    {
        if (isPrime[x])
        {
            for (i = 2; i * x < MaxNumber; i++)
            {
                isPrime[i * x] = 0;
            }
        }
    }

    for (i = 2; i < MaxNumber; i++)
    {
        if (isPrime[i])
        {
            printf("%d\t", i);
        }
    }

    printf("\n");
    for (i = 0; i < MaxNumber; i++)
    {
        printf("%d\n", isPrime[i]);
    }

    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    x = 97;
    int i;
    int isPrime = 1;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is prime\n", x);
    }
    else
    {
        printf("%d不是素数\n");
    }

    return 0;
}

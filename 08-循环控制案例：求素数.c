#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    // int sum = 200;
    int sum;

    printf("input the range:");
    scanf("%d", &sum);

    for (i = 1; i <= sum; i++)
    {
        int counter = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                counter++;
            }
            if (counter > 2)
            {
                break;
            }
        }
        if (counter <= 2)
        {
            printf("%d is prime\n", i);
        }
    }
 
    return 0;
}

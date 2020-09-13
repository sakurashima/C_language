#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ret = 0;
    int i = 1, j, k;

    while (ret < 50)
    {
        for (j = 1; j <= i; j++)
        {
            int counter = 0;
            for (k = 1; k <= j; k++)
            {
                if (k % j == 0)
                {
                    counter++;
                }
            }
            if (counter <= 2)
            {
                printf("%d", j);
                ret++;
            }
            i++;
        }
    }

    return 0;
}

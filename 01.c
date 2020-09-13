#include <stdio.h>

int main(void)
{
    int counter = 0;
    int result;

    scanf("%d", &result);

    result++;
    result /= 10;

    while (result > 0)
    {
        result /= 10;
        counter++;
    }

    printf("共有%d位数字\n", counter);

    return 0;
}
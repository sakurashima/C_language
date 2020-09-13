#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 阶乘计算
    // n! = 1 * 2 * 3 * 4 * ... * n
    int n, i, sum = 1;
    printf("input n:");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum *= i;
    }
    printf("%d! = %d\n", n, sum);

    return 0;
}

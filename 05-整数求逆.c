#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 求出一个三位数的各个位数
    int num;
    int num2;
    int i, j;
    
    scanf("%d", &num);
    num2 = num;

    i = num % 10;
    num /= 10;
    j = num % 10;
    num  /= 10;
    printf("%d%d%d\n", i, j, num);

    return 0;
}

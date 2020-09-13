#include <stdio.h>
void main()
{
    int a, n, s = 0, t;
    printf("输入a和n：");
    scanf("%d%d", &a, &n);
    t = a; //t = a1
    printf("s=");
    while (n > 0)
    {
        printf("%d", t); //显示每项相加的数
        s += t;
        a = a * 10; //每次a2扩大10倍加上a1
        t = t + a;  //t = an;没循环一次n+1；
        n--;
        if (n != 0)
            printf("+");
    }
    printf("=%d", s);
}

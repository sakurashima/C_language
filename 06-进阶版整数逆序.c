#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    x = 700;
    int digit;
    int ret = 0;

    while (x!=0)
    {
        digit = x%10;
        x/=10;
        ret = ret * 10 + digit;
        printf("%d", digit);
        // printf("x:%d, ret: %d\n", x, ret); 
    }
    



    return 0;
}

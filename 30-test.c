#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10] = {1, 2, 3, };
    int b[10] = a[10];

    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", b[i]);
    }
    
    return 0;
}

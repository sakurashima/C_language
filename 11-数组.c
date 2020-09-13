#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int i;
    for(i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        a[i] = i*2;
    }
    for(i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d >>>> %d\n", i, a[i]);
    }

    return 0;
}

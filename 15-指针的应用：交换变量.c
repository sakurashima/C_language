#include <stdio.h>

void swap(int *p, int *q);

int main(int argc, char const *argv[])
{
    int a = 6, b = 5;
    
    printf("a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int *p, int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}
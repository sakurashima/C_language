#include <stdio.h>

void f(int *p);

int main(int argc, char const *argv[])
{
    int a = 1; 
    int *b = &a;
    
    printf("%p\n", &a);
    printf("%p\n", b);
    f(b);

    return 0;
}

void f(int *p)
{
    printf("the value of %p is %d\n", p, *p);
}

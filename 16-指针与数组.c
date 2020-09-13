#include <stdio.h>

void test(int *fa);

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5,};
    printf("size of the a = %d\n", sizeof(a));
    test(a);

    return 0;
}

void test(int *a)
{
    printf("size of the a = %d\n", sizeof(a));
}

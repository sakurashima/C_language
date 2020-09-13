#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    // int *q = 0;
    void *p = 0;
    int cnt = 0;
    // q = &i;

    // free(q); // ERROR! 只能free系统分配得到的空间
    while ((p = malloc(100 * 1024 * 104)))
    {
        cnt++;
    }

    printf("%d00M\n", cnt);
    free(p);

    return 0;
}

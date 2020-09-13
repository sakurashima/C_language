#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i;
    char a[] = "hello";

    while (a[i] != '\0')
    {
        i++;
    }
    printf("strlen=%d\n", i);

    printf("strlen=[%d]\n", strlen(a));
    printf("size: %d\n", sizeof(a));

    return 0;
}

#include <stdio.h>


int main(int argc, char const *argv[])
{
    char *s = "Hello World";
    char a[] = "Hello World";
    printf("%p\n", s);
    printf("%p\n", a);
    // s[0] = "B";
    printf("s[0]=%c\n", s[0]);
    
    return 0;
}

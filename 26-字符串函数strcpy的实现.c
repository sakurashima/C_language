#include <stdio.h>
#include <string.h>

void mycpy(char *dst, const char *src);

int main(int argc, char const *argv[])
{
    char a[] = "hello";
    char b[] = "dsddd";
    mycpy(b, a);
    printf("%s\n", b);
    return 0;
}
  
 void mycpy(char *dst, const char *src)
{
    while (*src)
    {
        *dst++ = *src++;
    }
}
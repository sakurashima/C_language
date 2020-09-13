#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void delete (char c, char *s);

int main(void)
{
    // 3、编写一个函数功能是在指定字符串中查找并删除某个字符，函数无返回值。函数名为delete。
    char mystr[] = "java";
    char target_str;
    printf("%s\n", mystr);
    scanf("%c", &target_str);
    delete (target_str, mystr);
    printf("%s", mystr);
}

void delete (char c, char *s)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    char *a[] = {
        "hello",
        "world",
    };
    
    // 数组在作为函数参数进行传递的时候，不能够导入自身的长度，只能通过长度的参数告知该函数
    for(i=0; i<sizeof(a)/sizeof(a[0]); i++){
        printf("%s\n", a[i]);
    }

    return 0;
}
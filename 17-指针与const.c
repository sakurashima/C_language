#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 3;
    int *const q = &i; //表示该指针所包含的地址一旦初始化就不能再次加以改变
    
    printf("i: %d\n", i);
    *q = 23;
    printf("i: %d\n", i);

    //int a = 5;
    // q = &a; error!
    //q++; error!

    return 0;
}

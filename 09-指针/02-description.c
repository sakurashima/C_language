#include <stdio.h>

int main(){
    
    int var = 20;
    int *ip;
        
    ip = &var;

    printf("var的内存地址是: %p\n", &var);
    printf("*ip指针存储的值的地址是:%d\n", *ip);
    printf("*ip的内存地址是:%p\n", &*ip);
    
    
    return 0;
}

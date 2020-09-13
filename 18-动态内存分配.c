#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    int *p;
    int i;

    // int a[num];
    // for(i=0; i<num; i++){
    //     a[i] = i+1;
    //     printf("a[%d]=%d\n", i, a[i]);
    // }
    //以上代码在C99之前都是无效的，要申请动态内存
    
    p = (int*)malloc(num*sizeof(int));
    for(i=0; i<num; i++){
        scanf("%d", &p[i]);
    }

    for(i=num-1; i>=0; i--){
        printf("a[%d] = %d\n", i, p[i]);
    }

    free(p);

    return 0;
}

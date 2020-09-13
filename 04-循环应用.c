#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input_num; 
    float sum = 0.00;
    int i = 0;
    
    // 当用户输入的数字不为一的时候一直进行循环
    printf("请输入整数：(当输入-1的时候程序终止)");
    while(input_num!=-1)
    {
        scanf("%d", &input_num);
        sum += input_num;
        i++;
    }
    sum += 1;
    i -= 1;
    printf("the amount of input nums = %d，sum = %d, avg = %.2f", i, sum, sum/i);




    return 0;
}
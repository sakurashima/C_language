#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int main(int argc, char const *argv[])
{
    struct date today = {2020, 8, 22};  // 结构体的初始化
    // today.year = 2020;
    // today.month = 8;
    // today.day = 22;

    struct date tomorrow = today;
    struct date *ptoday = &today;

    printf("%p\n", ptoday);

    printf("tomorrow is %d-%d-%d\n", tomorrow.year, tomorrow.month, tomorrow.day);
    printf("today is %d-%d-%d\n", today.year, today.month, today.day);

    return 0;
}

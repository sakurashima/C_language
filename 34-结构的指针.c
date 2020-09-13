#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
} myday;

int main(int argc, char const *argv[])
{
    struct date *pdate = &myday;
    (*pdate).year = 12;
    printf("year: %d\n", myday.year);
    pdate->month = 12;
    printf("month: %d\n", pdate->month);
    return 0;
}

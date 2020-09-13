#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct point getStruct(void);

void outStruct(struct point q);

int main(int argc, char const *argv[])
{
    struct point y = {0, 0};
    y = getStruct();
    outStruct(y);
    return 0;
}

struct point getStruct(void)
{
    struct point p;
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    return p;
}

void outStruct(struct point q)
{
    printf("%d %d\n", q.x, q.y);
}
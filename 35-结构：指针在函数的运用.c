#include <stdio.h>

struct point
{
    int x;
    int y;
};

//函数的参数是一个指向结构体的指针，并且返回一个指向结构体的指针
struct point *getStruct(struct point *q);

void outStruct(struct point q);

int main(int argc, char const *argv[])
{
    struct point p = {1, 1};

    outStruct(*getStruct(&p));
    return 0;
}

struct point *getStruct(struct point *q)
{
    printf("依次输入结构体的x, y值: ");
    scanf("%d", &q->x);
    scanf("%d", &q->y);

    return q;
}

void outStruct(const struct point q)
{
    printf("%d %d\n", q.x, q.y);
}
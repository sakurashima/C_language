# include <stdio.h>

/* 需求：比较输入的两个值的大小，并显示 */
int main()
{
	int a,b;
	scanf("%d,%d", &a, &b);
	if(a>b)
		printf("%d>%d\n", a,b);
	else if(a<=b)
		printf("%d<%d\n", a,b);

	return 0;
}

# include <stdio.h>

/* 求1+2+3+4+...+99+100的和 */
int main()
{
	int sum=0, i=1;

	while(i<101)
	{
		sum += i;
		i++;
	}
	printf("和为%d\n", sum);
	return 0;
}

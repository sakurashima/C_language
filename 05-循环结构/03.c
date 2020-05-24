# include <stdio.h>

int main()
{
	char a;

	while(1) //这样很危险，没有条件的保持循环会占用大量运算资源，导致系统崩溃
	{
		scanf("%c\n", &a);
	}
	
	return 0;
}

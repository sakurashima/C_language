# include <stdio.h>
/* 需求：根据输入的字符，输出对应的大小写 */

int main()
{	
	char a,b;
	a = getchar();
	b = a + 32;
	putchar(b);
	putchar('\n');
	return 0;
}


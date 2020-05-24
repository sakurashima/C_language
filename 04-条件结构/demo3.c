# include <stdio.h>
/* 升级版：判断大小写，分别转换 */

int main()
{
	char a,b;
	scanf("%c", &a);
	if(a >= 'A' && a <= 'Z')
		printf("输入的是大写字母：%c，小写是：%c\n", a, a+32);
	else
		printf("输入的是小写字母：%c, 大写是：%c\n", a, a-32);
	
	return 0;
}

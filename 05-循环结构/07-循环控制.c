# include <stdio.h>

// 判断一个数是否为素数

int main()
{
	// 实现该需求可以有很多解法
	// 这里采用计数法，当能够除尽的次数达到三次就不为素数，否则一直执行

	int n, i=1, a, c=0;
	printf("输入要求证的数字：");
	scanf("%d", &n);
	while(i<=n){
		a = n%i;
		printf("%d/%d的余数是%d\n", n,i,a);
		
		if(a==0){c++;}
		
		// 提前结束，避免多余的运算，只要超过两次就结束循环
		else if(c>2){
			break;
		}
		i++;	
		}

	if(c>2){
		printf("%d不为素数\n", n);
	}else{
		printf("%d是素数\n", n);
	}

	return 0;
}


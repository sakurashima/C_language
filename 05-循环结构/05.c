# include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);
	int fact = 1;
	
	if(n==1){
		printf("1!=1\n");
	}
	else{
	//int i=1;
	for ( int i=2; i<=n; i++){
		fact *= i;
	}
	printf("%d!=%d\n", n, fact);
	}
	
	return 0;
}

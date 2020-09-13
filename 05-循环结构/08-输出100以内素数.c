# include <stdio.h>

//输出100以内的素数

int main()
{

	int i;
	for(i=1; i<=100; i++){
		int j, counter=0, a;

		for(j=1;j<=i;j++){
			a = i%j;
			//printf("%d/%d\n", i,j);
			if(a==0){
				counter++;
			}
			}
		if(counter==2){
			printf("%d为素数\n",i);
		}	
	}

	return 0;
}

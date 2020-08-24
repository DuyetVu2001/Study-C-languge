#include<stdio.h>
int main(){
	double sum = 0, i, n;
		scanf("%lf", &n);
	for( i = 1 ; i <= n ; i++  ){
		sum+= 1 / i;
	}
	printf("SUM = %0.2lf", sum);

	return 0;
}



#include<stdio.h>
int main(){
	int t, sum  = 0, i = 100;
	do{
		sum += i;
		++i;
	}while( i <= 10 );
	printf("sum = %d", sum);
	++i;
	
	return 0;
}



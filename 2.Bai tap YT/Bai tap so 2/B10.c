#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	long long i = 2;
	scanf("%lli", &n);
	printf("%lli = ", n);
	while( n != 1){
	 	if( n % i == 0){
	 	printf("\n%lli", i);
	 	n /= i;
	 	}
	 	else i++;
	 }

	return 0;
}



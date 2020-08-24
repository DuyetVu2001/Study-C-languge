#include<stdio.h>
int main(){
	int sum = 0, i, n;
	scanf("%d", &n);
	
	for(i = 1;i <= n; i++ ){
		sum += i;	
	}
	printf("Tong so tu 1 toi n la: Sum = %d", sum);
	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	float sum=0;
	scanf("%d", &n);
	for(i = 1; i<=n; i++){
		sum += (float)1/i;
	}
	printf("Gia tri cua A = %.3f", sum);
	return 0;
}



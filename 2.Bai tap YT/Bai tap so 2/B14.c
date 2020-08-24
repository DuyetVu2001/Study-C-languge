#include<stdio.h>
#include<math.h>
int main(){
	int n, i, gt = 1;
	scanf("%d", &n);
	if(n==0){
		gt = 1;
	}
	if(n>0){
		for(i=0; i<n; i++){
			gt *= (n-i);
		}
	}
	printf("Giai thua = %d", gt);
	return 0;
}



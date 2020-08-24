#include <stdio.h>
#include <math.h>

int pascal(int k, int n){
	if(k == 0 || k == n){
		return 1;
	}
	else{
		return pascal(k, n-1) + pascal(k-1, n-1);
	}
}

int main(){
	int i, k, n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++){	
		for(k = 0; k <= i; k++){
			printf("%5d", pascal(k, i));
		}
		printf("\n");
	}
	return 0;
}



#include<stdio.h>
#include<math.h>

int main(){
	int n, i, f0 = 1, f1 = 1, tong = 1;
	scanf("%d", &n);
	for(i = 2; i <= n; i++){
		tong = f0 + f1;
		f0 = f1;
		f1 = tong;
		
	}
	printf("%d", tong);
	return 0;
}



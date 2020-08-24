#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	int sum = 0;
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++){
		if(i % 7 == 0)
		sum += i;
	}
	printf("SUM = %d", sum);

	return 0;
}



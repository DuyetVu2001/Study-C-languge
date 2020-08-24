#include<stdio.h>
#include<math.h>
int main(){
	int n, tg = 0;
	scanf("%d", &n);
	while(n!=0){
		tg += n%10;
		n /= 10;
	}
	printf("Tong la = %d", tg);
	return 0;
}



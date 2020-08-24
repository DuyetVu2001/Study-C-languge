#include<stdio.h>
#include<math.h>
void nhap_n(int *m, int *n){
	printf("Nhap m: "); scanf("%d", m);
	printf("Nhap n: "); scanf("%d", n);
}
int main(){
	int m=2, n=4;
	nhap_n(&m, &n);
	printf("%d%d", m, n);

	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	int n, m = 0, i, g = 0;
	printf("Nhap so nguyen n: "); scanf("%d", &n);
	g = n;
	while(g!=0){
		m += g % 10;
		g /= 10;
	}
	printf("Tong cac chu so cua n la: %d\n", m);
	printf("Phan tich n ra so NT: \n");
	for(i=2; n!=1; ){
		if(n % i == 0){
			printf("%5d", i);
			n = n/i;
		}
		else i++;
	}
	return 0;
}



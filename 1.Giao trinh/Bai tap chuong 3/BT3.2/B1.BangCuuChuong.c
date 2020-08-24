#include<stdio.h>
#include<math.h>
int main(){
	int n, i, tich;
	printf("Nhap so tu nhien nguyen duong n (co gia tri tu 2 den 10):");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++){
		tich = n * i;
		printf("\n%d*%d=%d", n, i, tich);
	}
	
	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	int n, a, b, c, d, tong;
	printf("Nhap vao so tu nhien n <= 1000: ");
	scanf("%d", &n);
	if(n>=0 && n<=1000){
		
		a = n / 1000;
		b = n / 100 % 10;
		c = n / 10 %10;
		d = n % 10;
		
		if(n == 1000){
			printf("\nn co 4 chu so!!");
			tong = 1;
			printf("\nChu so dau tien cua n: 1");
		}
		if(n>99 && n<1000){
			printf("\nn co 3 chu so!! ");
			tong = b+c+d;
			printf("\nChu so dau tien cua n: %d: ", b);
		} 
		if(n<100 && n>9){
			printf("\nn co 2 chu so!!");
			tong = c+d;
			printf("\nChu so dau tien cua n: %d: ", c);
		} 
		if(n<10){
			printf("\nn co 1 chu so!!");
			tong = d;
			printf("\nChu so dau tien cua n: %d", d);
		}
		printf("\nTong cac chu so cua n la: %d", tong);
		printf("\nChu so cuoi cung cua n la: %d", d);
		printf("Chu so hang chuc n la: %d", c);		
	}
	else printf("Gia tri khong thoa man!!");
	return 0;
}



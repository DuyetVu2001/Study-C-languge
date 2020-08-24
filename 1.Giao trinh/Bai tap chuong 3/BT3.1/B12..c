#include<stdio.h>
#include<math.h>
int main(){
	int n, a, b, tong;
	printf("Nhap so tu nhien n:");
	scanf("%d", &n);
	
	if(n<=99){
		a = n / 10;
		b = n % 10;
		tong = a*a*a + b*b*b;
		if(n*n==tong) printf("\nn binh bang tong lap phuong cac chu so cua n!!");
		else printf("\nn binh khong bang tong lap phuong cac chu so cua n!!");
	}

	return 0;
}



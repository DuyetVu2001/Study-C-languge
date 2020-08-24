#include<stdio.h>
int main(){
	int luachon;
	do{
		printf("=====MENU=====\n1. Tinh tong hai so nguyen.\n2. Tinh hieu hai so nguyen."
			"\n3. Tinh tich hai so nguyen.\n4. Chia nguyen hai so nguyen."
			"\n5. Chia lay du hai so nguyen."
			"\n0. Thoat.\nNhap gia tri ban chon: ");
		scanf("%d", &luachon);
		switch(luachon){
			case 0: break;
			case 1:{
				int a, b;
				printf("Nhap so a, b:");
				scanf("%d%d", &a, &b);
				printf("\n%d + %d = %d", a, b, a + b);
				break;}
			case 2:{
				int a, b;
				printf("Nhap so a, b:");
				scanf("%d%d", &a, &b);
				printf("\n%d - %d = %d", a, b, a - b);
				break;}
			case 3:{
				int a, b;
				printf("Nhap so a, b:");
				scanf("%d%d", &a, &b);
				printf("\n%d * %d = %d", a, b, a * b);
				break;}
			case 4:{
				int a, b;
				printf("Nhap so a, b:");
				scanf("%d%d", &a, &b);
				printf("\n%d / %d = %d", a, b, a / b);
				break;}
			case 5:{
				int a, b;
				char c = '\%';
				printf("Nhap so a, b:");
				scanf("%d%d", &a, &b);
				printf("\n%d %c %d = %d", a, c, b, a % b);
				break;}
			default:
				printf("Yeu cau lua tron so tu 0 den 5\n ");
		}
	}while(luachon!=0);	
	return 0;
}



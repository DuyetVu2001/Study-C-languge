#include<stdio.h>
int main(){
	int value;
	do{
	printf("Nhap vao mot gia tri > 0:\n");
	scanf("%d", &value);
	
	}while( value <= 0);// nhap vao gia tri thoa man dieu kien cua while se tiep tuc vong lap
	printf("Gia tri thoa man = %d\n", value);

	return 0;
}



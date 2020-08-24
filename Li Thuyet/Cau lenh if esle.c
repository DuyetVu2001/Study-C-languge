#include<stdio.h>
int main(){
	int money;
	printf("Nhap so tien cua A: ");
	scanf("%d", &money);
	if(money>=1000){
		printf("A la trieu phu.");
	}
	else{
		printf("A khong phai la trieu phu.");
	}

	return 0;
}



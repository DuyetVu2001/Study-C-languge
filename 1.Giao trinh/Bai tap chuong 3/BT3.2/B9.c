#include<stdio.h>
#include<math.h>
int main(){
	int ga, cho;
	do{
		printf("\tBAI TOAN VUA GA VUA CHO\n");
		printf("Nhap so ga: ");
		scanf("%d", &ga);
		printf("Nhap so cho: ");
		scanf("%d", &cho);
		if(ga!=22 && cho!=14) printf("Dap an sai.Yeu cau nhap lai!!\n");
	}while(ga!=22 && cho!=14);
		if(ga==22 && cho==14)printf("Dap an dung!!");
	return 0;
}



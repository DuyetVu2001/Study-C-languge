#include<stdio.h>
#include<math.h>
int main(){
	int h, i, j;
	printf("Nhap vao chieu cao h: ", h); scanf("%d", &h);
	printf("Tam giac vuong can chieu cao h la:\n\n");
	for(i=1; i<=h; i++){
		for(j=1; j<=i; j++){
			printf("  *  ");
		}
		printf("\n\n\n");
	}
	return 0;
}



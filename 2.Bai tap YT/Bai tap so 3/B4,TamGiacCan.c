#include<stdio.h>
#include<math.h>
int main(){
	int h, i, j;
	printf("Nhap vao chieu cao h: ", h); scanf("%d", &h);
	printf("Tam giac vuong can chieu cao h la:\n\n");
	for(i=h; i>=1; i--){
		for(j=1; j<=i-1; j++){
			printf("   ");
		}
		for(j=2*h; j>(2*i-1); j--){
			printf(" * ");
		}
		printf("\n\n");
	}
	return 0;
}



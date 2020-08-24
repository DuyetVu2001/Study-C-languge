#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap vao so nguyen a, b: ");
	scanf("%d%d", &a, &b);
	if(a > b) printf("\nSo a lon hon");
	else if( a == b) printf("\na = b");
		else printf("\nSo b lon hon");

	return 0;
}



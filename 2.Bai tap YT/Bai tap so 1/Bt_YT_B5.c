#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("Nhap vao 4 so nguyen a, b, c, d:\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int max = a;
	if( max < b ) max = b;
	if( max < c ) max = c;
	if( max < d ) max = d;
	
	if(a==b && a==c && a==d) printf("Khong co gia tri lon nhat");
	else printf("max = %d", max);
	return 0;
}



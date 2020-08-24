#include<stdio.h>
int main(){
	float a, b, c, d;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	float max = a;
	if(max < b) max = b;
	if(max < c) max = c;
	if(max < d) max = d;
	
	if(a == b && a == c && a == d) printf("Khong co gia tri lon nhat");
	else printf("max = %f", max);
	return 0; 
}

#include<stdio.h>
#include<math.h>
int main(){
	int x1, x2, y1, y2;
	float kc;
	printf("Nhap hoanh do A: ");
	scanf("%d", &x1);
	printf("Nhap tung do A: ");
	scanf("%d", &y1);
	printf("Nhap hoanh do B: ");
	scanf("%d", &x2);
	printf("Nhap tung do B: ");
	scanf("%d", &y1);
	
	kc =  sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	printf("\nKhoang cach giua hai toa do la: %f", kc);

	return 0;
}



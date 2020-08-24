#include<stdio.h>
#include<math.h>
int main(){
	int a1, a2, b1, b2, c1, c2;
	float x, y, detA, detA1, detA2;
	printf("Nhap cac he so a1, a2, b1, b2, c1, c2: ");
	scanf("%d%d%d%d%d%d", &a1, &a2, &b1, &b2, &c1, &c2);
	
	detA = a1*b2 - b1*a2;
	detA1 = c1*b2 - b1*c2;
	detA2 = a1*c2 - c1*a2;
	if (detA==0) printf("He pt vo nghiem!!");
	else{
		x = detA1/detA;
		y = detA2/detA;
		printf("Gia tri cua x la: %.3f", x);
		printf("Gia tri cua y la: %.3f", y);
	}
	return 0;
}


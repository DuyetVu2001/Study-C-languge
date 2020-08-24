#include<stdio.h>
#include<math.h>
int main(){
	float deg, rad, s, c;
	printf("Nhap so do goc : ");
	scanf("%f", &deg);
	rad=M_PI*deg/180;
	printf("radian : %f", rad);
	s=sin(rad);
	c=cos(rad);
	printf("\nSin= %f", s);
    printf("\nCos= %f", c);
	return 0;
}



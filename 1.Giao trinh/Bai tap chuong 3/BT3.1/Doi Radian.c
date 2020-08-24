#include<stdio.h>
#include<math.h>
int main(){
	float goc, rad, c, s;
	scanf("%f", &goc);
	rad = (goc/180)*M_PI;
	c = cos(rad);
	s = sin(rad);
	
	printf("\nDo lon goc theo don vi radian la: %f", rad);
	printf("\nCos goc a la: %f", c);
	printf("\nSin goc a la: %f", s);

	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, d;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	int max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	if(max<d) max=d;
	printf("\nMAX = %d", max);

	return 0;
}



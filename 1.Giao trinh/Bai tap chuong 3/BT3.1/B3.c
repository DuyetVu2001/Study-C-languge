#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	
	float a, b;
	scanf("%f%f", &a, &b);
	
	int x = a*a + b*b;
	float rad;
	rad=((3*x+2)*M_PI)/180;
	float f, T;	
	if(2<x<3){
		f = 5*cos(rad)-log(x*x+2);
		T = sqrt(f);
		printf("Gia tri cua T = %f", T);
	}
	else if(x>=3){
		f = pow((x+3),2);
		T = sqrt(f);
		printf("Gia tri cua T = %f", T);
	}
	else
	printf(" T = 1");
	

	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	
	int x = a*a + b*b;
	float f, T;	
	if(2<x<3){
		f = 5*cos(3*x+2)-log(x*x+2);
		T = sqrt(f);
		printf("Gia tri cua T = %f", T);
	}
	else{
	
	if(x>=3){
		f = pow((x+3),2);
		T = sqrt(f);
		printf("Gia tri cua T = %f", T);
	}
	else printf("T = 1");
	return 0;
}
}



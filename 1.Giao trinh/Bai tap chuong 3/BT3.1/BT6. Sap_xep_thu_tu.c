#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, d, x;
	printf("Nhap vao 4 so nguyen a, b, c, d: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if(a>b){
		x = a;
		a = b;
		b = x;
	}
	else if (a>c){
		x = a;
		a = c;
		c = x;
	}
	else if (a>d){
		x = a;
		a = d;
		d = x;
	}
	if(b>c){
		x = b;
		b = c;
		c = x;
	}
	else if (b>d){
		x = b;
		b = d;
		d = x;
	}
	if(c>d){
		x = c;
		c = d;
		d = x;
	}
	
	printf("\nSap xep thu tang dan cho 4 so a, b, c, d: \n%d \n%d \n%d \n%d", a, b, c, d);
	
	

	return 0;
}



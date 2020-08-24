#include<stdio.h>
int main(){
	float a, b;
	scanf("%f%f", &a, &b);
	if (a==0 && b==0) printf("\n\aPhuong trinh vo so nghiem!!");
	else if(a==0 && b!=0) printf("\n\aPhuong trinh vo nghiem!!");
	else printf("Nghiem cua phuong trinh la x = %0.2f", -a/b);

	return 0;
}



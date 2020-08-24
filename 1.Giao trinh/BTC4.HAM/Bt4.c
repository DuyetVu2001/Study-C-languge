#include<stdio.h>
#include<math.h>
int uscln(int a, int b){
	int r;
	if(a<b){
		r=a;
		a=b;
		b=r;
	}
	r = a % b;
	while(r!=0){
		a=b;
		b=r;
		r = a%b;
	}
	return b;
}
int main(){
	int a, b, c, d, ucln;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	ucln = uscln(uscln(a,b),uscln(c,d));
	printf("UCLN cua 4 so a, b, c, d la: %d", ucln);	
	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a>b) printf("\n%d lon hon %d!!", a, b);
	if(a<b) printf("\n%d nho hon %d!!", a, b);
	if(a==b) printf("\nHai so bang nhau!!");
	return 0;
}



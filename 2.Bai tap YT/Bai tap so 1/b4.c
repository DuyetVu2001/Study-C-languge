#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	printf("Nhap vao so tu nhien a, b: ");
	scanf("%d%d", &a, &b);
	if(a>b) printf("%d > %d", a, b);
	else if(a == b) printf("Hai so bang nhau!!");
		else printf("%d < %d", a, b);
	return 0;
}



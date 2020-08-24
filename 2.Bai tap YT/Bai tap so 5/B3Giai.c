#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kt(char *a); //Kiem tra so thuan nghich
 
int main (){
	long long n;
	printf("Nhap vao so can kt: "); scanf("%ill", &n);
	char a[20];
	lltoa(n, a, 10);
	if(kt(a)) printf("La so thuan nghich!");
	else printf("Khong phai so thuan nghich!");
	return 0;
}
int kt(char *a){
	char b[20];
	strcpy(b, a);
	strrev(b);
	return strcmp(a, b) == 0;
}

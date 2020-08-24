#include<stdio.h>
//int main(){
//	int n;
//	printf ("\nNhap so nguyen n:");
//	scanf ("%d", &n);
//	if ( n>0){
//		if( n % 2 == 0) printf("%d la so nguyen duong chan.", n);
//		else printf("%d la so nguyen duong le.", n);
//	}
//	else{
//	//if( n<0 ){
//		if (n % 2 == 1) printf("%d la so nguyen am le.", n);
//		else printf("%d la so nguyen am chan.", n);
//	}
//	if( n == 0) printf("\nSo 0 khong phai la so nguyen am, nguyen duong!!!", n);
//	return 0;
//}
int main(){
    int n;
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);
    if( n > 0 ){
    	if(n % 2 == 1) printf("\n\a%d la so nguyen duong le!!", n);
    	else printf("\a\n%d la so nguyen duong chan!!", n);
	}
	else if ( n == 0)printf("\n\aSo 0 khong phai so nguyen duong, nguyen am");
	else {
		if(n % 2 == 1) printf("\n\a%d la so nguyen am le!! ", n);
		else printf("\n\a%d la so nguyen am chan !!", n);
	}
	return 0;
}



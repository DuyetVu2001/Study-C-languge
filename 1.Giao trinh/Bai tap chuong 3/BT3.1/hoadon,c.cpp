#include<stdio.h>
#include<math.h>
int main(){
	int n , bill ; 
	printf("Dien tieu thu trong thang la: ");
	scanf("%d",&n);
	if( n <= 100) bill = 750 * n ; 
	if( 100< n&&n <= 200) bill = 750 * 100 + (n - 100) * 1250 ;
	if( 200< n&&n <= 300) bill = 750 * 100 + 1250 * 100 + (n - 200) * 1750;
	if(n>300) bill = 750 * 100 + 1250 * 100 + 1750 * 100 + (n - 300) * 3000;
	printf("hoa on tien dien la: %d",bill);
	return 0;
}



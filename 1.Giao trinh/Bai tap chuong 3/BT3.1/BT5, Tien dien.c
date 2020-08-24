#include<stdio.h>
#include<math.h>
int main(){
	long long n, tienDien;
	printf("Nhap vao so tien dien n: ");
	scanf("%lli", &n);
	
	if(n<=100) tienDien = n*750;
	if(n>100 && n<201) tienDien = 100*750 + (n-100)*1250;
	if(n>200 && n<301) tienDien = 100*750 + 100*1250 + (n-200)*1750;
	if(n>300) tienDien = 100*750 + 100*1250 + 100*1750 + (n-300)*3000;
	
	printf("\nSo tien dien phai tra la: %lli", tienDien);
	return 0;
}



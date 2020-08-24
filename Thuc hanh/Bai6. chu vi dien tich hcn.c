#include<stdio.h>
int main(){
    float a, b, chuvi, dientich;
    printf("Chieu dai a la: ");
    scanf("%f", &a);
    printf("Chieu rong b la: ");
    scanf("%f", &b);
    chuvi = ( a + b ) * 2;
    dientich = a * b;
    printf("\nChu vi la: (%f + %f) * 2 = %f", a,b,(a+b)*2);
    printf("\nDien tich la: %f", dientich);
	return 0;
}



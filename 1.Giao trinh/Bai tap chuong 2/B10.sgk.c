#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	float cv, s, r, p;
	printf("Nhap canh thu nhat: ");
	scanf("%d", &a);
	printf("Nhap canh thu hai: ");
	scanf("%d", &b);
    printf("Nhap canh thu ba: ");
    scanf("%d", &c);
    
    cv = a + b + c;
    p = cv / 2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    r = a * b * c / 4 /s;
    
    printf("\nChu vi hinh tron la: %f", cv);
	printf("\nDien tich hinh tron la: %f", s);
	printf("\nBan kinh duong tron noi tiep la: %f", r);
	return 0;
}



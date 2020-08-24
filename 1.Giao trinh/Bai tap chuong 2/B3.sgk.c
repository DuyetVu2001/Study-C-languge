#include<stdio.h>
#include<math.h>
int main(){
    int n, a, b, c, d, e, f, t;
    float tbc;
    printf("Nhap so nguyen n co 6 chu so: ");
    scanf("%d", &n);
    a = n / 100000;
    b = n / 10000 % 10;
    c = n / 1000 % 10;
    d = n / 100 % 10;
    e = n / 10 % 10;
    f = n % 10;
    t = a + b + c + d + e + f;
    tbc = (float) t/6;
    printf("\na: %d", a);
    printf("\nb: %d", b);
    printf("\nc: %d", c);
    printf("\nd: %d", d);
    printf("\ne: %d", e);
    printf("\nf: %d", f);
    printf("\nTong: %d", t);
    printf("\nTrung binh cong: %f", tbc);
	return 0;
}



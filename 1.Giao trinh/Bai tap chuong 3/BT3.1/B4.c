#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, cv, dt, r, p, ha;
	scanf("%f%f%f", &a, &b, &c);
	
	if(a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a)
	printf("\aGia tri khong thoa man!!");
	else{
		printf("\n\aThoa man 3 canh tam giac!!");
		cv = a + b + c;
		p = cv / 2;
		dt = sqrt(p*(p-a)*(p-b)*(p-c));
		r = a*b*c/(4*dt);
		ha = 2*dt/a;
		
		printf("\nChu vi la: %.2f", cv);
		printf("\nDien tich la: %.2f", dt);
		printf("\nBan kinh duong tron ngoai tiep la: %.2f", r);	
		printf("\nDuong cao la: %.2f", ha);
	}
	return 0;
}



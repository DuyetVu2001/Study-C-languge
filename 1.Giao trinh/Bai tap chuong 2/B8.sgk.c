#include<stdio.h>
#include<math.h>
int main(){
	int a, b ,cv;
	float s, r, c;
	printf("Do dai goc vuong thu nhat la: ");
	scanf("%d", &a);
	printf("Do dai goc vuong thu hai la: ");
	scanf("%d", &b);
	
	c = sqrt(pow(a,2)+pow(b,2));
	cv = a + b + c;
	s = a * b / 2;
	r = c / 2;
	
	printf("\nCanh huyen cua tam giac la: %f", c);
	printf("\nChu vi tam giac la: %d", cv);
	printf("\nDien tich tam giac la: %f", s);
	printf("\nBan kinh duong tron noi tiep tam giac la: %f", r);

	return 0;
}



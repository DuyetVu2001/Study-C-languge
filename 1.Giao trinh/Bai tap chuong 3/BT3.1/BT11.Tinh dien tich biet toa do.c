#include<stdio.h>
#include<math.h>
int main(){
	int x1, x2, x3, y1, y2, y3;
	float s, p, AB, BC, AC;
	
	printf("Nhap vao toa do diem A(x1,y1):");
	scanf("%d%d", &x1, &y1);
	printf("Nhap vao toa do diem B(x2,y2):");
	scanf("%d%d", &x2, &y2);
	printf("Nhap vao toa do diem C(x3,y3):");
	scanf("%d%d", &x3, &y3);
	
	AB = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
	BC = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
	AC = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2));
	
	if(AB+BC==AC || AB+AC==BC || AC+BC==AB) printf("Ba diem A, B, C thang hang!!");
	else{
		p = (AB+BC+AC)/2;
		s = sqrt(p*(p-AB)*(p-BC)*(p-AC));
		printf("\nDien tich tam giac la: %f", s);
	}
	return 0;
}



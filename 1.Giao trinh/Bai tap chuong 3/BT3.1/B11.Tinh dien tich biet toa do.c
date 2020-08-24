#include<stdio.h>
#include<math.h>
int main(){
	int x1, x2, x3, y1, y2, y3;
	float s, taCo;
	
	printf("Nhap vao toa do diem A(x1,y1):");
	scanf("%d%d", &x1, &y1);
	printf("Nhap vao toa do diem B(x2,y2):");
	scanf("%d%d", &x2, &y2);
	printf("Nhap vao toa do diem C(x3,y3):");
	scanf("%d%d", &x3, &y3);
	
	taCo = abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
	s = taCo/2;
	printf("Dien tich tam giac la: %f", s);
	return 0;
}



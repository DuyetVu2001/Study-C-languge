#include<stdio.h>
#include<math.h>
int main(){
	int a, b, x;
	printf("Nhap vao he so a, b cua phuong trinh bac nhat 1 an: ax + b = 0\n");
	scanf("%d%d", &a, &b);
	
	if(a!=0){
		x = -b/a;
		printf("Phuong trinh co nghiem duy nhat x=%d", x);
	}
	else{
		if(b==0) printf("Phuong trinh co nghiem dung voi moi x !!");
		else printf("Phuong trinh vo nghiem!!");
	}
	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	
	if(a <= 0 || b <= 0 || c <= 0) printf("Gia tri khong hop le!!\a");
	
	if( a + b > c || a + c > b || b + c > a){
		if ( a == b == c)
		printf("Tam giac deu.");
		
		else if ( a == b && a != c || a ==c && a != b || b ==c && b != a){
			if( a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
			printf("Tam giac vuong can.");
			
			else printf("Tam giac can.");
		}
		else{
			if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b
			&& !(a == b && a != c || a ==c && a != b || b ==c && b != a))
			printf("Tam giac vuong thuong.");
			
			else printf("Tam giac thuong.");
		}
	}
	else printf("\n\aKhong phai la tam giac!!");
	
	return 0;
}



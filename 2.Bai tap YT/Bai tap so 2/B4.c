#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	int s, s1, s2;
	s = s1 = s2 =0;
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	for(i = 0; i <= n; i++){
		s += i;
		if(i % 2 != 0)
		s1 += i;
		if(i % 2 == 0)
		s2 += i;
	}
	printf("Tong cac so tu nhien khong lon hon n la: s = %d", s);
	printf("\nTong cac so tu nhien le khong lon hon n la: s1 = %d", s1);
	printf("\nTong cac so tu nhien chan khong lon hon n la: s1 = %d", s2);
	
	

	return 0;
}



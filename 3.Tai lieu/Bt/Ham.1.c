#include<stdio.h>
#include<math.h>
int triple(int soHang)
{
	return 3 * soHang;
}
int main (){
	int soNhapVao = 0, soTriple = 0;
	
	scanf("%d", &soNhapVao);
	soTriple = triple(soNhapVao);
	printf("So hang %d", soTriple);
	return 0;
}



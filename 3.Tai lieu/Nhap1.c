#include<stdio.h>
#include<math.h>
void tripple(int *pSoHang){
	*pSoHang *= 3;
}
int main(){
	int soHang = 5;
	int *pointer = &soHang;
	tripple(pointer);
	printf("Gia tri moi: %d", *pointer);
	return 0;
}



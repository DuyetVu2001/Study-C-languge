#include<stdio.h>
#include<math.h>
int main(){
	int x, y, ketQua;
	char ch;
	printf("Nhap phep thuc hien: ");
	ch = getchar();// co y nghia giong: scanf("%c", &ch);
	printf("Nhap 2 so nguyen x, y: ");
	scanf("%d%d", &x, &y);

	
	switch(ch){
		case '*':
			ketQua = x * y;
			break;
		case '/':
			ketQua = x / y;
			break;
		case '+':
			ketQua = x + y;
			break;
		case '-':
			ketQua = x - y;
			break;
	}
	printf("\nKet qua = %d", ketQua);
	return 0;
}



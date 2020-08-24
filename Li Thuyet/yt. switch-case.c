#include<stdio.h>
int main(){
	char luachon;
	
	printf("Cau hoi: con cho di chuyen bang may chan?");
	printf("\nA. 1\nB. 2\nC. 3\nD. 4");
	printf("\nNhap vao dap an ban chon: ");
	luachon=getchar();
	
	switch( luachon ){
		case 'a':
		case 'A':
    	case 'b':
		case 'B':
		case 'c':
		case 'C':
			printf("Ban da chon sai!");
			break;
		
		case 'd':
		case 'D':
			printf("\aDap an dung!");
			break;
		default:
			printf("Dap an ban chon khong phu hop!!");
	}
	return 0;
}



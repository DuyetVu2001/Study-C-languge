#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define N 2 //So lan doan

char docKytu();
void hienThiTuBiAn(char *tuBiAn, char *b, char kyTu, int *n);

int main(int argc, char *argv[]) {
	char tuBiAn[20] = "WONDERFUL";
	char kyTu = NULL;
	
	char *b;//Tao 1 mang chua dau sao co so luong == tuBiAn
	int i, k = strlen(tuBiAn); // k la so ki tu co trong tuBiAn;
	b = malloc(k*sizeof(char));
	for(i = 0; i  < k; i++){
		b[i] = '*';
	}
	b[k] = '\0';

	int n = N;// So luot nguoi choi co the doan
	
	printf("Chao mung ban tham gia tro choi NGUOI TREO CO!\n\n");
		
	do{
		
		printf("Ban co %d luot doan.\n", n);
		printf("Tu bi an la gi? ");
		printf("%s", b);
		printf("\nHay doan mot chu cai: ");
		kyTu = docKytu();
		hienThiTuBiAn(tuBiAn, b, kyTu, &n);
		printf("\n");
		
	}while(n != 0)	;
	
	if(n == 0) printf("\n==== GAME OVER!! ====");
	
	return 0;
}

char docKytu(){
	char kytuNhapVao = 0;
	kytuNhapVao = getchar();
	kytuNhapVao = toupper(kytuNhapVao);//Viet hoa 
	
	while(getchar() != '\n');
	
	return kytuNhapVao;
}

void hienThiTuBiAn(char *tuBiAn, char *b, char kyTu, int *n){
	int i, k = 1;
	long doDaiCuaTuBiAn = strlen(tuBiAn);
	
	for(i = 0; i < doDaiCuaTuBiAn; i++){
		if(tuBiAn[i] == kyTu){
			b[i] = tuBiAn[i];
			k = 0;
			
		}
	}
	if(k == 1) (*n)--;

	if(strcmp(b, tuBiAn) == 0){
		printf("\n\nXin chuc mung! Tu bi an la: %s", b);
		*n = 0;
	}
}

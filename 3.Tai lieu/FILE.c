#include<stdio.h>
#include<math.h>

int main(){
	char a, b, c, chuoi[20];
	FILE *tapTin = NULL;
	tapTin = fopen("test.txt", "w");
	
	int tuoi = 19;
	
	if(tapTin != NULL){
		fputc('A', tapTin);
		
		fputs("\nHi chao cau", tapTin);
		
		fprintf(tapTin,"\nToi %d tuoi", tuoi);
		
		
		fclose(tapTin);
	}
	
	
	
	return 0;
}



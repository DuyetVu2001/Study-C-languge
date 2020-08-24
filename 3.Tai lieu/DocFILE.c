#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	FILE *tapTin = NULL;
	
	tapTin = fopen("test.txt", "r");
	
	char a, b[30], c[3] = {0};
	if(tapTin != NULL){
//		do{
//			a = fgetc(tapTin); //ket thuc tra ve EOF (end of file)
//			printf("%c", a);
//		}while(a != EOF);
		
		while(fgets(b, 30, tapTin) != NULL){//Tra ve NULL khi ket thuc tap tin
			printf("%s", b); 
		}		

//		fscanf(tapTin, "%c\n%c\n%c", &c[0], &c[1], &c[2]);
//		printf("%c\n%c\n%c", c[0], c[1], c[2]);
		
		fclose(tapTin);
	}
	return 0;
}



/*
	Doc ghi file voi ngon ngu C
	-Cu ghi thong tin ra file
	-Cu phap doc thong tin tu file theo dinh dang cho truoc
	
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int id;
	char *firstName;
	char *lastName;
	int age;
} Person;

static int id = 100;

void getUserInput(FILE *fout){ //thao tac ghi thong tin ra file
	
	Person p;
	
	p.firstName = malloc(sizeof(char)*50);
	p.lastName = malloc(sizeof(char)*50);
	int choice = 0;
	
	while( 1 ){ // lap vo han
		p.id = ++id;
		puts("Enter your first name, last name, age: ");
		scanf("%s%s%d", p.firstName, p.lastName, &p.age);
		fprintf(fout, "%5d%10s%10s%5d\n", p.id, p.firstName, p.lastName, p.age); // ghi ra file
		
		puts("Continue? press 1; Exit ? press 0: ???");
		scanf("%d", &choice);
		
		if(choice == 0){// thoat lap
			break;
		}
	}
	
}
void readFile(FILE *fin){
	
	Person p;
	p.firstName = malloc(sizeof(char)*50);
	p.lastName = malloc(sizeof(char)*50);
	
	puts("User info:\n");
	while(!feof(fin)){
		fscanf(fin, "%5d%10s%10s%5d", &p.id, p.firstName, p.lastName, &p.age);
		if(!feof(fin)){
			printf("%5d%10s%10s%5d\n", p.id, p.firstName, p.lastName, p.age);
		}
	}
	
	puts("___DONE___");
}

int main(){
	
	FILE *fin; //doc du lieu tu file 
	FILE *fout; //ghi du lieu vao file
	//C:\\Users\\ASUS\\Desktop\\KQ.XYZ	
	//C:/Users/ASUS/Desktop/KQ.XYZ
	
	fout = fopen("C:/Users/NgocDuyet/Desktop/KQ.XYZ", "w");
	if(fout != NULL){
		getUserInput(fout); // thao tac ghi file
		fclose(fout); // dong file lai
	}
	
	fin = fopen("C:/Users/NgocDuyet/Desktop/KQ.XYZ", "r");
	if(fin != NULL){
		readFile(fin); // thao tac doc file
		fclose(fin); // dong file lai
	}
	
	return 0;
}


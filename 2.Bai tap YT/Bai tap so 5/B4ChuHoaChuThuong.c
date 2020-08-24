#include<stdio.h>
#include<math.h>
#include<string.h>

void upper(char *a, int ); //Ham viet hoa
void lower(char *a, int ); //Ham viet thuong

int main(){
	char a[100];
	fgets(a, 99, stdin);
	int dem = strlen(a);
	upper(a, dem);
	lower(a, dem);
	return 0;
}
void upper(char *a, int n){
	int i;
	for(i = 0; i < n; i++){
		a[i] = toupper(a[i]);
	}
	printf("Day viet hoa: %s", a);
}
void lower(char *a, int n){
	int i;
	for(i = 0; i < n; i++){
		a[i] = tolower(a[i]);
	}
	printf("\nDay viet thuong: %s", a);
}


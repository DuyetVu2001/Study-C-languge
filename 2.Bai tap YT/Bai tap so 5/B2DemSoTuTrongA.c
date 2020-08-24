#include<stdio.h>
#include<math.h>
#include<string.h>

int isWhiteSpace(char c);
int countWords(char *a);
int main(){
	char a[100];
	printf("Nhap vao day can dem: \n");
	fgets(a, 99, stdin);
	printf("Day co so tu la: %d", countWords(a));
	return 0;
}
int isWhiteSpace(char c){
	return c == ' ' || c == '\t';
}
int countWords(char *a){
	int i = 0, count = (!isWhiteSpace(a[0]));// Neu a[0] co khoang trong thi gan count = 0. nguoc lai count = 1
	int size = strlen(a) - 1;
	for(i = 0; i < size - 1; i++){
		if(isWhiteSpace(a[i]) && !isWhiteSpace(a[i+1])){
			count++;
		}
	}
	return count;
}














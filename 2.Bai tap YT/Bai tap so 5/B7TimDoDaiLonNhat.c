#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool whiteSpace(char ); //ham kiem tra ki tu khoang trang
int timViTri(char *, int *); //ham tim vi tri tu dai nhat
void hienThiTu(char *, int , int ); //hien thi tu dai nhat dau tien

int main(){
	char a[100];
	fgets(a, 99, stdin);
	int len = 0;
	int pos = timViTri(a, &len);
	hienThiTu(a, pos, len) ;
	return 0;
}
bool whiteSpace(char c){
	return c == ' ' || c == '\t' || c == '\n';
}
int timViTri(char *a, int *length){
	int i;
	int pos = 0; // Vi tri cua tu dai nhat
	int posCurrent = 0;// Vi tri cua tu hien tai
	int len = 0;// Do dai tu hien tai
	int lenMax = 0;// Do dai tu dai nhat
	int size = strlen(a);
	for(i = 0; i < size; i++){
		if(!whiteSpace(a[i])){
			posCurrent = i - len;
			len++;
		}
		else{
			if(len > lenMax){
				lenMax = len;
				pos = posCurrent;
			}
			len = 0;
		}
	}
	*length = lenMax;
	return pos;	
}
void hienThiTu(char *a, int pos, int length){
	int i;
	printf("Tu dai nhat la: \'");
	for(i = pos; i < pos + length; i++){
		printf("%c", a[i]);
	}
	printf("\'\nTai vi tri: %d\nDo dai: %d", pos, length);
}












#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

//Xoa khoang trang dau cau
//Xoa khoang trang cuoi cau
//Xoa khoang trang giua cau 
//Them dau cach vao sau dau ( vd: . , ? !)
//Viet hoa dau dong va viet hoa sau dau

void removeHead(char *a);
void removeTail(char *a);
void removeMid(char *a);
void addWhiteSpace(char *a);
void vietHoa(char *a);

bool whiteSpace(char c);
bool dauCanVietHoa(char c);
bool dauCanCach(char c);

int main(){
	char a[100];
	printf("Nhap vao xau can chuan hoa: \n");
	fgets(a, 99, stdin);
	
	removeHead(a);
	removeTail(a);
	removeMid(a);
	addWhiteSpace(a);
	vietHoa(a);
	printf("Xau sau chuan hoa la:\n%s", a);
	
	return 0;
}
bool whiteSpace(char c){
	return c == ' ' || c == '\t' || c == '\n';
}
bool dauCanVietHoa(char c){
	return c == '.' || c == '?' || c == '!';
}
bool dauCanCach(char c){//Xoa khoang trong trc cac dau nay va space sau no
	return c == ',' || c == ':' || c == '.' || c == '?' || c == '!' ||
	c == '(' || c == ')' || c == ';';
}

void removeHead(char *a){
	int i = 0, count = 0;
	int size = strlen(a);
	while(whiteSpace(a[i])){
		count++;
		i++;	
	}
	if(count > 0){
		for(i = 0; i <= size-count; i++){
		a[i] = a[i+count];
	}
	}
}
void removeTail(char *a){
	int i;
	int size = strlen(a) - 1;
	while(whiteSpace(a[size])){
		a[size] = '\0';
		size--;
	}
}
void removeMid(char *a){
	int i, j;
	int size = strlen(a);
	for(i = 0; i < size; i++){
		if(whiteSpace(a[i]) && whiteSpace(a[i+1])){
			for(j = i+1; j < size; j++){
				a[j] = a[j+1];
			}
			i--;
			size--;
		}
		else if(whiteSpace(a[i]) && dauCanCach(a[i+1])){
			for(j = i; j < size; j++){
				a[j] = a[j+1];
			}
			i--;
			size--;
		}
		else if(a[i] == '\t')
			a[i] = ' ';
	}
}
void addWhiteSpace(char *a){
	int i, j;
	int size = strlen(a);
	for(i = 0; i < size-1; i++){
		if(dauCanCach(a[i]) && !whiteSpace(a[i+1])){
			size++;
			for(j = size; j > i + 1; j--){
				a[j] = a[j-1];
			}
			a[i+1] = ' ';
		}
	}
}
void vietHoa(char *a){
	int i;
	int size = strlen(a);
	a[0] = toupper(a[0]);
	for(i = 0; i < size; i++){
		if(dauCanVietHoa(a[i]) && whiteSpace(a[i+1])){
			a[i+2] = toupper(a[i+2]);
		}
	}
}










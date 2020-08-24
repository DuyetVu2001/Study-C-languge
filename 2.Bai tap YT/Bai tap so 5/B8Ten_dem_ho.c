#include<stdio.h>
#include<math.h>
#include<string.h>

int firstSpace(char *a);//Tim vi tri da cach dau tien
int lateSpace(char *a);//Vi tri dau cach cuoi cung
void hienThi(char *a, int first, int last);//In ra Ten-dem-ho

int main(){
	char a[100];
	printf("Nhap vao Ho va Ten: ");
	fgets(a, 99, stdin);
	int first = firstSpace(a);
	int late = lateSpace(a);
	int size = strlen(a);
	hienThi(a, first, late);
	return 0;
}
int firstSpace(char *a){
	int i, index;
	int size = strlen(a);
	for(i = 0; i < size; i++){
		if(a[i] == ' '){
			index = i;
			break;
		}
	}
	return index;
}
int lateSpace(char *a){
	int i, index;
	int size = strlen(a);
	for(i = size-1; i >= 0; i--){
		if(a[i] == ' '){
			index = i;
			break;
		}
	}
	return index;
}
void hienThi(char *a, int first, int last){
	int i;
	int size = strlen(a);
	printf("Hien thi:\n");	
	//In ten
	for(i = last + 1; i < size-1; i++){
		printf("%c", a[i]);
	}
	//In dem
	for(i = first; i <= last; i++){
		printf("%c", a[i]);
	}
	//In ho
	for(i = 0; i <= first; i++){
		printf("%c", a[i]);
	}
}





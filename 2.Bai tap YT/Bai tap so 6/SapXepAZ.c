#include<stdio.h>
#include<string.h>
typedef struct{
	char ten[20];
}Ten;
void nhap(Ten *ten){
	int i;
	for(i = 0; i < 5; i++){
		scanf("%s", ten[i].ten);
	}
}
void xuat(Ten *ten){
	int i;
	for(i = 0; i < 5; i++){
		printf("%s\n", ten[i].ten);
	}
}
void sort(Ten *ten){
	int i, j;
	Ten t;
	for(i = 0; i < 4; i++){
		for(j = i+1; j < 5; j++){
			if(strcmp(ten[i].ten, ten[j].ten) < 0){
				t = ten[i];
				ten[i] = ten[j];
				ten[j] = t;
			}
		}
	}
}
int main(){
	Ten ten[5];
	printf("Nhap ten: \n");
	nhap(ten);
	printf("Xuat ten: \n");
	xuat(ten);
	sort(ten);
	printf("Sau: \n");
	xuat(ten);
	return 0;
}



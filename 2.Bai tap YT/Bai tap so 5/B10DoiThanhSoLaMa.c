#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// I = 1; V = 5; X = 10; L = 50; C = 100; D = 500; M = 1000

int quyDoi(char c);
int quyDoiThapPhan(char *);
int quyDoiLaMa(char *);

int main(){
	char a[100], b[100];
	printf("Nhap vao so la ma: ");
	fgets(a, 99, stdin);
	int n;
//	printf("Nhap so thap phan: "); scanf("%d", &n);
//	itoa(n, b, 10);
	printf("Gia tri quy doi thap phan = %d", quyDoiThapPhan(a));
//	printf("Gia tri quy doi la ma = ");
	return 0;
}
int quyDoi(char c){
	if(c == 'I') return 1;
	if(c == 'V') return 5;
	if(c == 'X') return 10;
	if(c == 'L') return 50;
	if(c == 'C') return 100;
	if(c == 'D') return 500;
	if(c == 'M') return 1000;
}
int quyDoiThapPhan(char *a){
	int size = strlen(a) - 1;
	int i, tong = quyDoi(a[size-1]);
	for(i = size - 1; i > 0; i--){
		if(quyDoi(a[i]) <= quyDoi(quyDoi(a[i-1]))){
			tong += quyDoi(a[i-1]);
		}
		else if(quyDoi(a[i]) > quyDoi(quyDoi(a[i-1]))){
			tong -= quyDoi(quyDoi(a[i-1]));			
		}
	}
	return tong;
}
int quyDoiLaMa(int n){
	
}


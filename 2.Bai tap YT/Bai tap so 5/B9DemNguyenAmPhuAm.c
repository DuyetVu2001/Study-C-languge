#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool nguyenAm(char c);
bool phuAm(char c);
bool kiTuSo(char c);
bool kiTuKhac(char c);
void count(char *a, int *demN, int *demP, int *demS, int *demK);

int main(){
	char a[100];
	printf("Nhap chuoi: \n");
	fgets(a, 99, stdin);
	int demN = 0, demP = 0, demS = 0, demK = 0;
	count(a, &demN, &demP, &demS, &demK);
	printf("So nguyen am: %d\nSo phu am: %d\nSo ki tu so: %d\nSo ki tu khac: %d",
	demN, demP, demS, demK);
	return 0;
}
bool nguyenAm(char c){
	return c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i';
}
bool phuAm(char c){
	if(!nguyenAm(c) && c >= 'a' && c <= 'z'){
		return true;
	}
	return false;
}
bool kiTuSo(char c){
	return c >= '0' && c <= '9';
}
bool kiTuKhac(char c){
	if(!nguyenAm(c) && !phuAm(c) && !kiTuSo(c)){
		return true;
	}
	return false;
}
void count(char *a, int *demN, int *demP, int *demS, int *demK){
	int i;
	int size = strlen(a);
	for(i = 0; i < size-1; i++){
		a[i] = tolower(a[i]);
		if(nguyenAm(a[i])){
			(*demN)++;
		}
		if(phuAm(a[i])){
			(*demP)++;
		}
		if(kiTuSo(a[i])){
			(*demS)++;
		}
		if(kiTuKhac(a[i])){
			(*demK)++;
		}
	}
}








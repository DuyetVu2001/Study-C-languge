#include<stdio.h>
#include<math.h>
void copyArray(int a1[], int a2[], int kichThuoc);
int main(){
	int a1[4] = {1,4,3,4}, a2[4];
	
	printf("Copy:\n");copyArray(a1, a2, 4);
	
	return 0;
}
void copyArray(int a1[], int a2[], int kichThuoc){
	int i;
	for(i=0; i<kichThuoc; i++){
		a2[i] = a1[i];
		printf("Cac phan tu trong mang a2 la: %d\n", a2[i]);
	}
}



#include<stdio.h>
#include<math.h>
void sapXepArray(int a[], int kichThuoc);
void xuatMang(int a[], int kichThuoc);
int main(){
	int a[4] = {4,5,2,1};
	sapXepArray(a, 4);
	printf("Sap xep:\n"); xuatMang(a, 4);
	return 0;
}
void sapXepArray(int a[], int kichThuoc){
	int i, j, r;
	for(i=0; i<kichThuoc-1; i++){
		for(j=1+i; j<kichThuoc; j++){
			if(a[i] > a[j]){
				r = a[i];
				a[i] = a[j];
				a[j] = r;
			}
			
		}	
	}
}
void xuatMang(int a[], int kichThuoc){
	int i;
	for(i=0; i<kichThuoc; i++){
		printf("%d\n", a[i]);
	}
}
	



#include<stdio.h>
#include<math.h>
void nhap_mang(int a[]){
	int i, j;
	for(i = 0; i < 9; i++){
		printf("Nhap a[%d]: \n", i);
		scanf("%d", &a[i]);
		for(j = 0; j < i; j++){
			if(a[i] == a[j]){
				i--;
				break;
			}
		}
	}
}
void xuat_mang(int a[]){
	int i;
	printf("Mang vua nhap: \n\n");
	for(i = 0; i < 9; i++){
		printf("%d\n", a[i]);
	}
}
int main(){
	int a[30];
	printf("Nhap mang: \n\n"); nhap_mang(a);
	xuat_mang(a);
	return 0;
}



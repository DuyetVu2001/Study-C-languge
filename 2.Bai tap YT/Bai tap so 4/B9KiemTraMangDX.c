#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void check(int a[], int n){
	int i, dem = 0;;
	for(i = 0; i < ceil(n/2); i++){
		if(a[i] != a[n-i-1]){
			dem = 1;
			printf("Mang khong doi xung!");
			break;
		}
	}
	if(dem == 0) printf("Mang doi xung!");
}
int main(){
	int a[100], n = 9; 
	printf("Nhap mang so duong co %d phan tu:\n", n);
	nhap_mang(a, n);
	check(a, n);
	return 0;
}



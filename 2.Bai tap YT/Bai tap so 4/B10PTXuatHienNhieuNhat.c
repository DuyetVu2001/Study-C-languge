#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void sort(int a[], int n){
	int i, j, tmp = 0;
	for(i = 0; i < n; i++){
		for(j = i; j < n; j++){
			if(a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void find(int a[], int n){
	int i = 0, j, dem, max = 0, index = 0;
	for(i = 0; i < n; ){
		dem = 1;
		while(a[i] == a[i+1]){
			dem++;
			i++;
		}
		if(dem > max){
			max = dem;
			index = i;
		}
		i++;
	}
	printf("So %d co so lan xuat hien nhieu nhat voi %d lan.", a[index], max);
}
int main(){
	int a[100], n = 9; 
	printf("Nhap mang so duong co %d phan tu:\n", n);
	nhap_mang(a, n);
	sort(a, n);
	find(a, n);
	return 0;
}



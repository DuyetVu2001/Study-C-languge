#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
}
int so_thu_2(int a[], int n){
	int i, max = a[0], max2 = a[1];
	for(i = 1; i < n; i++){
		if(max < a[i]){
			max2 = max;
			max = a[i];
		}
		else if(max > a[i] && max2 < a[i]){
			max2 = a[i];
		}
	}
	return max2;
}
int main(){
	int a[100], n = 5;
	printf("Nhap mang co 5 phan tu: \n"); nhap_mang(a, n);
	printf("So lon thu 2 trong day so la: %d", so_thu_2(a, n));
	return 0;
}



#include<stdio.h>
#include<math.h>

void xuat_nguoc(double a[], int n){
	int i;
	printf("Xuat nguoc mang:\n");
	for(i=n-1; i>=0; i--){
		printf("%.2lf\n", a[i]);
	}
}
void swap(double *a, double *b){
	double tmp = *a;
	*a = *b;
	*b = tmp;
}
void sap_xep(double a[], int n){
	int i, j;
	for(i = 0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i] > a[j]){
				swap(&a[i], &a[j]);
			}
		}
	}
}
void sort(double a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%.2lf\n", a[i]);
	}
}
void chen_m(double a[], int n){
	printf("Chen so thuc 2.4 vao mang va ko lam mat tinh tang dan.\n");
	a[n] = 2.4;
	n++;
	sap_xep(a, n);
	sort(a, n);
}
int main(){
	int n = 5;
	double a[5] = {2.2,2.1,2.3,2.5,2.8};
	xuat_nguoc(a, n);
	sap_xep(a, n);
	printf("Sap xep tang dan:\n");
	sort(a, n);
	chen_m(a, n);
	return 0;
}



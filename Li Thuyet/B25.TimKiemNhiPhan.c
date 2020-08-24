#include<stdio.h>
#include<math.h>
#include<stdlib.h>
static int n = 10;
void nhap_mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%5d", &a[i]);
	}
}
void sort(int a[], int n){
	int i, j, tmp;
	for(i=0; i<n; i++){
		for(j=n-1; j>i; j--){
			if(a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%5d", a[i]);
	}
}
int tim_so(int a[], int x){
	int left = 0, right = n-1, mid, m = 0;
	while(right>=left){
		mid = (right-left)/2;
		if(a[mid]==x)
			m = 1;
		else if(a[mid]<x)
			left = mid+1;
		else
			right = mid-1;
	}	
	return m;	
}
int main(){
	int a[10], x;
	nhap_mang(a, n);
	sort(a, n);
	xuat_mang(a, n);
	printf("\n");
	while(1){
		printf("Nhap x: ");
		scanf("%d", &x);
		if( x == -1) break;
		if(tim_so(a, x))
			printf("Tim thay x.");
		else
			printf("Khong ton tai x.\n");
	}
}



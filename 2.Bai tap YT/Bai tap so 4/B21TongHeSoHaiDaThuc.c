#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void nhap(int *a, int n){
	int i = n;
	for(; i >= 0; i--){
		printf("Nhap he so x^%d: ", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int *a, int n){
	int i;
	for(i = n; i >= 0; i--){
		printf("%3d*x^%d", a[i], i);
		if(i > 0 && a[i] > 0) printf(" +");
	}
}
int *kq(int *p, int *q, int np, int nq, int *n){
	int i;
	static int a[100];
	if(np >= nq) *n = np;
	else *n = nq;
	for(i = 0; i <= *n; i++){
		if(i <= nq && i <= np) a[i] = q[i] + p[i];
		else if(i <= nq && i > np) a[i] = q[i];
		else a[i] = p[i];
	}
	return a;
}
int main(){
	int p[100], q[100];
	int np, nq, n;
	printf("Nhap bac cua da thuc P(x): "); scanf("%d", &np);
	nhap(p, np);
	printf("Nhap bac cua da thuc Q(x): "); scanf("%d", &nq);
	nhap(q, nq);
	
	printf("P(x) = "); xuat(p, np);
	printf("\nQ(x) = "); xuat(q, nq);
	
	int *res = kq(p, q, np, nq, &n);
	printf("\nKQ = "); xuat(res, n);

	return 0;
}



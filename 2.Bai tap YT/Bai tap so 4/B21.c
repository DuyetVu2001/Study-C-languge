#include<stdio.h>

void nhap(int arr[],int &n){
	printf("\nNhap bac cua da thuc: <= 999: ");
	scanf("%d", &n);
	
	for(int i = n; i>= 0; i--){
		printf("Nhap he so cua x^%d: ", i);
		scanf("%d", &arr[i]);
		
	}
}

int *kq(int p[], int q[], int np, int nq, int &n){
	
	if(np>= nq) n = np; // lay bac max trong hai bac cua da thuc p, q
	else n = nq;
	static int a[1000];
	for(int i = 0; i<= n; i++){
		if(i <= np && i <= nq) a[i] = p[i] + q[i];
		else if(i<= np && i> nq) a[i] = p[i];
		else a[i] = q[i];
	}
	return a;
}

void xuat(int a[], int n){
	for(int i = n; i>= 0; i--){
		printf("%dx^%d ", a[i], i);
		if(i> 0 && a[i-1] > 0)
			printf(" + ");
	}
}

int main(){
	int p[1000], q[1000], np, nq, n;
	printf("\nNhap da thuc P(x): ");
	nhap(p,np);
	printf("\nNhap da thuc Q(x): ");
	nhap(q,nq);
	
	printf("\nDa thuc P(x): ");
	xuat(p, np);
	printf("\nDa thuc Q(x): ");
	xuat(q, nq);
	int *res = kq(p, q, np, nq, n);
	printf("\nDa thuc KQ(x): ");
	xuat(res, n);
	return 0;
}

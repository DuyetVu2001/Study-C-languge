#include<stdio.h>
#include<math.h>
int nhap_n(){
	int n;
	do{
		printf("Nhap so nguyen N thoa man (0<N<=10000): ");
		scanf("%d", &n);
	}while(n<=0 || n>10000);
}
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void tbc(int a[], int n){
	int i, dema = 0, demd = 0, suma = 0, sumd = 0;
	for(i = 0; i < n; i++){
		if(a[i] < 0){
			suma += a[i];
			dema++;
		}
		else if(a[i] > 0){
			sumd += a[i];
			demd++;
		}
	}
	if(dema > 0) printf("TBC cua cac so am trong mang la: %f\n", (float)suma/dema);
	else printf("Khong co so am trong mang!\a\n");
	if(dema > 0) printf("TBC cua cac so duong trong mang la: %f\n", (float)sumd/demd);
	else printf("Khong co so duong trong mang!\a\n");
}
int kt_Nt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i < n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
void tim_soNt(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(kt_Nt(a[i])){
			printf("%d\n", a[i]);
		}
	}
}
int main(){
	int a[10000], n; 
	n = nhap_n();
	printf("Nhap mang co %d phan tu:\n", n);
	nhap_mang(a, n);
	tbc(a, n);
	printf("So nguyen to trong mang la:\n"); tim_soNt(a, n);
	return 0;
}



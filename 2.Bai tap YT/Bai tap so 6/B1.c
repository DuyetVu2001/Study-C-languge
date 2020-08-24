#include<stdio.h>
#include<math.h>

typedef struct {
	int tu;
	int mau;
}PhanSo;

PhanSo nhap(){
	PhanSo phanSo;
	printf("Nhap vao tu so: "); scanf("%d", &phanSo.tu);
	while(1){
		printf("Nhap vao mau so khac 0: ");
		scanf("%d", &phanSo.mau);
		if(phanSo.mau != 0){
			break;
		}
	}
	return phanSo;
}

int ucln(int a, int b){
	if(a < 0){
		a = a * (-1);
	}
	if(b < 0){
		b = b * (-1);
	}
	while(a != b){
		if(a < b){
			b -= a;
		}
		else{
			a -= b;
		}
	}
	return a;
}

PhanSo rutGon(PhanSo p){
	if(p.tu != 0){
		int u = ucln(p.tu, p.mau);
		p.tu /= u;
		p.mau /= u;
	}
	return p;
}
int main(){
	PhanSo phanSo = nhap();
	phanSo = rutGon(phanSo);
	printf("%d/%d", phanSo.tu, phanSo.mau);
	
	return 0;
}



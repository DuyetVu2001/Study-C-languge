#include<stdio.h>
#include<math.h>
typedef struct{
	int tu;
	int mau;
}PhanSo;

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

int bcnn(int a, int b){
	int u = ucln(a, b);
	return a * b / u;
}

PhanSo rutGon(PhanSo p){
	if(p.tu != 0){
		int u = ucln(p.tu, p.mau);
		p.tu /= u;
		p.mau /= u;
	}
	return p;
}

PhanSo hamTinhTong(PhanSo a, PhanSo b){
	PhanSo tong;
	tong.mau = bcnn(a.mau, b.mau);
	tong.tu = a.tu*tong.mau/a.mau + b.tu*tong.mau/b.mau;
	tong = rutGon(tong);
	return tong;
}

PhanSo hamTinhHieu(PhanSo a, PhanSo b){
	PhanSo hieu;
	hieu.mau = bcnn(a.mau, b.mau);
	hieu.tu = a.tu*hieu.mau/a.mau - b.tu*hieu.mau/b.mau;
	hieu = rutGon(hieu);
	return hieu;
}

PhanSo hamTinhTich(PhanSo a, PhanSo b){
	PhanSo tich;
	tich.tu = a.tu * b.tu;
	tich.mau = a.mau * b.mau;
	tich = rutGon(tich);
	return tich;
}

PhanSo hamTinhThuong(PhanSo a, PhanSo b){
	PhanSo thuong;
	int tmp = b.tu;
	b.tu = b.mau;
	b.mau = tmp;
	return hamTinhTich(a, b);
}

int main(){
	printf("Nhap vao phan so thu nhat\n");
	PhanSo a = nhap();
	printf("Nhap vao phan so thu hai\n");
	PhanSo b = nhap();
	
	PhanSo tong = hamTinhTong(a, b);
	PhanSo hieu = hamTinhHieu(a, b);
	PhanSo tich = hamTinhTich(a, b);
	PhanSo thuong = hamTinhThuong(a, b);
	
	int chon;
	
	do{
		printf("\n====== MENU ======\n");
		printf("1.Tong\n2.Hieu\n3.Tich\n4.Thuong\n5.Rut gon\n0.Thoat\nBan chon?\n");
		scanf("%d", &chon);
		switch(chon){
			case 0:
				break;
			case 1:{
				printf("Tong %d/%d + %d/%d = %d/%d", 
					a.tu, a.mau, b.tu, b.mau, tong.tu, tong.mau);
				break;
			}
			case 2:{
				printf("\nHieu %d/%d - %d/%d = %d/%d", 
					a.tu, a.mau, b.tu, b.mau, hieu.tu, hieu.mau);
				break;
			}
			case 3:{
				printf("\nTich %d/%d * %d/%d = %d/%d", 
					a.tu, a.mau, b.tu, b.mau, tich.tu, tich.mau);
				break;
			}
			case 4:{
				printf("\nThuong %d/%d / %d/%d = %d/%d", 
					a.tu, a.mau, b.tu, b.mau, thuong.tu, thuong.mau);
				break;
			}
			case 5:{
				a = rutGon(a);
				b = rutGon(b);
				printf("Rut gon hai phan so:\n%d/%d\n%d/%d",
					a.tu, a.mau, b.tu, b.mau);
				break;
			}
			default:{
				printf("Sai chuc nang vui long chon lai!");
				break;
			}		
		}
	}while(chon!=0);
	return 0;
}

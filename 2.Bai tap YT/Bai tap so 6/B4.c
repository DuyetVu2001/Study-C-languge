#include<stdio.h>
#include<math.h>

typedef struct{
	char ho[20];
	char dem[20];
	char ten[20];
}HoVaTen;

typedef struct{
	float diemToan;
	float diemVan;
	float diemAnh;
	float tbc;
}Diem;

typedef struct{
	int msv;
	HoVaTen hoVaTen;
	int tuoi;
	char gioiTinh[10];
	Diem diem;	
}SinhVien; 

void nhapHoTen(HoVaTen *ten){
	printf("Ho: "); 
	scanf("%s", ten->ho);
	printf("Dem: ");
	getchar();
	gets(ten->dem);
	printf("Ten: "); 
	scanf("%s", ten->ten);
}

void nhapDiem(Diem *diem){
	printf("Diem Toan: ");
	scanf("%f", &diem->diemToan);
	printf("Diem Van: ");
	scanf("%f", &diem->diemVan);
	printf("Diem Anh: ");
	scanf("%f", &diem->diemAnh);
//	diem->tbc = (diem->diemToan + diem->diemVan + diem->diemAnh) / 3;
}
SinhVien nhap(){
	SinhVien sv;
	printf("Nhap ma: "); 
	scanf("%d", &sv.msv);
	nhapHoTen(&sv.hoVaTen);
//	printf("Tuoi: "); 
//	scanf("%d", &sv.tuoi);
//	printf("Gioi tinh: "); 
//	scanf("%s", sv.gioiTinh);
	nhapDiem(&sv.diem);
	return sv;
}

void hienThiTT(SinhVien sv){
	printf("%-10d %-10s %-10s %-10s %-10.2f %-10.2f %-10.2f\n", sv.msv, sv.hoVaTen.ho,
	sv.hoVaTen.dem, sv.hoVaTen.ten, sv.diem.diemToan, sv.diem.diemVan, sv.diem.diemAnh);
}

void sapXepTen(SinhVien *ten){
	
}
int main(){
	SinhVien dssv[100];
	int slsv = 0;
	SinhVien sv;
	sv = nhap();
	dssv[slsv++] = sv;
	printf("%-10s %-10s %-10s %-10s %-10s %-10s %-10s\n"
	, "Ma SV", "Ho", "Dem", "Ten"
	, "Diem Toan", "Diem Van", "Diem Anh");
	
	
	return 0;
}



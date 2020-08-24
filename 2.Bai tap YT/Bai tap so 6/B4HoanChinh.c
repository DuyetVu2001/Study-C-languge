#include<stdio.h>
#include<string.h>

typedef struct{
	char ho[20];
	char dem[20];
	char ten[20];
}HoTen;

typedef struct{
	float toan;
	float tin;
	float tbc;
}DiemSo;

typedef struct{
	int msv;
	HoTen hoTen;
	char gioiTinh[10];
	DiemSo diemSo;
}SinhVien;

SinhVien nhapTT(){
	SinhVien sv;
	printf("Nhap msv: "); scanf("%d", &sv.msv);
	printf("Nhap vao ho: "); scanf("%s", sv.hoTen.ho);
	printf("Nhap vao ten dem: "); scanf("%s", sv.hoTen.dem);
	printf("Nhap vao ten: "); scanf("%s", sv.hoTen.ten);
	printf("Nhap vao gioi tinh: "); scanf("%s", sv.gioiTinh);
	printf("Diem toan: "); scanf("%f", &sv.diemSo.toan);
	printf("Diem tin: "); scanf("%f", &sv.diemSo.tin);
	sv.diemSo.tbc = (sv.diemSo.toan + sv.diemSo.tin) / 2;
	return sv;
}

void hienThiCot(){
	printf("%-7s %-10s %-10s %-10s %-7s %-9s %-9s %-9s\n",
	"MaSV", "Ho", "Dem", "Ten", "GT",
	"DiemToan", "DiemTin", "TBC");
}

void hienThi(SinhVien *sv, int slsv){
	int i;
	for(i = 0; i < slsv; i++){
		printf("%-7d %-10s %-10s %-10s %-7s %-9.2f %-9.2f %-9.2f\n",
		sv[i].msv, sv[i].hoTen.ho, sv[i].hoTen.dem, sv[i].hoTen.ten, 
		sv[i].gioiTinh, sv[i].diemSo.toan, sv[i].diemSo.tin, 
		sv[i].diemSo.tbc);
	}
}

void sapXepTheoTen(SinhVien *dssv, int slsv){
	int i, j;
	SinhVien sv;
	
	for(i = 0; i < slsv-1; i++){
		for(j = i + 1; j < slsv; j++){
			if(strcmp(dssv[i].hoTen.ten, dssv[j].hoTen.ten) > 0){
				sv = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = sv;
			}
		}
	}
}

void sapXepTBCGiam(SinhVien *dssv, int slsv){
	int i, j;
	SinhVien sv;
	
	for(i = 0; i < slsv-1; i++){
		for(j = i + 1; j < slsv; j++){
			if(dssv[i].diemSo.tbc < dssv[j].diemSo.tbc){
				sv = dssv[i];
				dssv[i] = dssv[j];
				dssv[j] = sv;
			}
		}
	}
}

void timTheoTen(SinhVien *dssv, int slsv){
	int i, k = 0;
	char ten[20];
	printf("Nhap ten: "); scanf("%s", ten);
	hienThiCot();
	for(i = 0; i < slsv; i++){
		if(strcmp(dssv[i].hoTen.ten, ten) == 0){	
			hienThi(&dssv[i], 1);
			k = 1;
		}
	}
	if(k == 0){
		printf("\nKhong co SV %s trong danh sach!!\n", ten);
	}
}

void ghiFile(SinhVien *sv, int slsv){
	getchar();
	char fName[30];
	printf("Nhap ten file: ");
	gets(fName);
	FILE* fOut = fopen(fName, "a");
	int i;
	for(i = 0; i < slsv; i++){
		fprintf(fOut, "%-7d %-10s %-10s %-10s %-7s %-9.2f %-9.2f %-9.2f\n",
		sv[i].msv, sv[i].hoTen.ho, sv[i].hoTen.dem, sv[i].hoTen.ten, 
		sv[i].gioiTinh, sv[i].diemSo.toan, sv[i].diemSo.tin, 
		sv[i].diemSo.tbc);
	}
	fclose(fOut);
}

void docFile(SinhVien *sv, int *slsv){
	FILE* fOut = fopen("SV.txt", "r");
	int i = 0;
	if(fOut){//Mo file thanh cong thi doc file
		for(;;){
			SinhVien sV;
			
			fscanf(fOut, "%10d %10s %10s %10s %10s %10f %10f %10f\n",
			&sV.msv, sV.hoTen.ho, sV.hoTen.dem, sV.hoTen.ten, 
			sV.gioiTinh, &sV.diemSo.toan, &sV.diemSo.tin, 
			&sV.diemSo.tbc);
			
			sv[i++] = sV;
			
			if(feof(fOut)) { // thoat chuong trinh
				break;
			}
		}
	}
	fclose(fOut);
	*slsv = i;	
}

int main(){
	SinhVien dssv[100]; //Mang danh sach 100 SV
	SinhVien sv;
	int slsv = 0, i;
	
	docFile(dssv, &slsv);
	printf("DANH SACH SINH VIEN HIEN THOI:\n");
	hienThiCot();
	hienThi(dssv, slsv);
	
	int chon;
	do{
		printf("\n===== MENU =====\n");
		printf("1.Them moi SV.\n");
		printf("2.Hien thi danh sach SV.\n");
		printf("3.Sap xep theo ten.\n");
		printf("4.Sap xep diem toan giam dan.\n");
		printf("5.Tim SV.\n");
		printf("6.Ghi thong tin SV ra file.\n");
		printf("0.Thoat chuong trinh.\n");
		printf("\nMoi ban chon: ");
		scanf("%d", &chon);
		switch(chon){
			case 0:
				break;
			case 1:{
				sv = nhapTT();
				dssv[slsv++] = sv; //Gan tung pt trong mang = bien sv
				break;
			}
			case 2:{
				hienThiCot();
				hienThi(dssv, slsv);
				break;
			}
			case 3:{
				printf("Danh sach sau khi sap xep theo ten a->z:\n");
				sapXepTheoTen(dssv, slsv);
				hienThiCot();
				hienThi(dssv, slsv);
				break;
			}
			case 4:{
				printf("Danh sach sau khi sap xep theo diem tbc giam dan:\n");	
				sapXepTBCGiam(dssv, slsv);
				hienThiCot();
				hienThi(dssv, slsv);
				break;
			}
			case 5:{
				timTheoTen(dssv, slsv);
				break;
			}
			case 6:{
				ghiFile(dssv, slsv);
				break;
			}
			default:{
				printf("\nNhap sai thong tin, yeu cau nhap lai!\n");
				break;
			}
		}
	}while(chon);
	return 0;
}

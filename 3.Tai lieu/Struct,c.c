#include<stdio.h>
#include<math.h>

typedef struct{
	char ten[20];
	char ho[20];
	int tuoi;
}TaiKhoan;

void nhapTT(TaiKhoan *nguoiChoi){
	int i;
	for(i = 0; i < 2; i++){
		printf("Nguoi choi %d. Nhap ho: ", i+1);
		scanf("%s", nguoiChoi[i].ho);
		printf("Nguoi choi %d. Nhap ten: ", i+1);
		scanf("%s", nguoiChoi[i].ten);
		printf("Nguoi choi %d. Nhap tuoi: ", i+1);
		scanf("%d", &nguoiChoi[i].tuoi);
	}
}
void xuatTT(TaiKhoan *nguoiChoi){
	int i;
	for(i = 0; i < 2; i++){
		printf("Nguoi choi %d:\n", i+1);
		printf("%-10s %-10s %-10d\n", nguoiChoi[i].ten, nguoiChoi[i].ho,
		nguoiChoi[i].tuoi);
	}
}
int main(){
	TaiKhoan nguoiChoi[2];
	nhapTT(nguoiChoi);
	xuatTT(nguoiChoi);
	return 0;
}



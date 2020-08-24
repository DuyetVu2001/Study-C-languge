#include<stdio.h>
#include<math.h>
#include<string.h>

void demKiTuKhongPhanBietChuHoaChuThuong(char *);
void demKiTuPhanBietChuHoaChuThuong(char *);

int main(){
	char a[100];
	printf("Nhap chuoi ki tu can dem:\n");
	fgets(a, 99, stdin);
	
	printf("Dem  ki tu khong phan biet chu hoa, chu thuong:\n");
	demKiTuKhongPhanBietChuHoaChuThuong(a);
	
	printf("Dem ki tu khong phan biet chu hoa chu thuong:\n");
	demKiTuPhanBietChuHoaChuThuong(a);
	return 0;
}
void demKiTuKhongPhanBietChuHoaChuThuong(char *a){
	int i;
	char w;
	int size = strlen(a);
	int b[97+26] = {0}; //Khoi tao mot mang 65+26 phan tu = 0;
	for(i = 0; i < size; i++){
		w = tolower(a[i]); //Gan w = chu cai thuong trong day;
		b[w]++; //Tang gia tri cua pt chua chu so w theo gia tri ma ASCII;
	}	
	for(i = 97; i < (97+26); i++){
		if(b[i] > 0){
			printf("%c: %d", (char)i, b[i]);
		printf("\n");
		}
	}
}
void demKiTuPhanBietChuHoaChuThuong(char *a){
	int i;
	int size = strlen(a);
	int b[97+26] = {0};
	for(i = 0; i < size; i++){
		b[a[i]]++;//Tang gia tri (cua phan tu mang gia tri tuong ung voi ki tu ASCII)
	}
	for(i = 65; i < (97+26); i++){//Bat dau tu 65 vi 'A' trong ma ASCII = 65
		if(b[i] > 0){
			printf("%c: %d", (char)i, b[i]);
		printf("\n");
		}
	}
}




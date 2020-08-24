#include<stdio.h>
#include<math.h>
int main(){
	int chon, m, soTien;
	printf("==Chao mung den voi cua hang vai lua Ha Dong!!==\n"
		"Vai loai 1: 200k/1m\n"
		"Vai loai 2: 170k/1m\n"
		"Vai loai 3: 120k/1m\n"
		"Vai loai 4: 90k/1m\n"
		"Moi quy khach lua chon loai vai:");
	scanf("%d", &chon);
	switch(chon){
		case 1:{
			printf("Vai loai 1!\n");
			printf("Moi quy khach lua chon so met vai:");
			scanf("%d", &m);
			soTien = m*200000;
			break;}
		case 2:{
			printf("Vai loai 2!\n");
			printf("Moi quy khach lua chon so met vai:");
			scanf("%d", &m);
			soTien = m*170000;
			break;}
		case 3:{
			printf("Vai loai 3!\n");
			printf("Moi quy khach lua chon so met vai:");
			scanf("%d", &m);
			soTien = m*120000;
			break;}
		case 4:{
			printf("Vai loai 4!\n");
			printf("Moi quy khach lua chon so met vai:");
			scanf("%d", &m);
			soTien = m*90000;
			break;}				
	}
	printf("\nSo tien can thanh toan: %d", soTien);
	return 0;
}



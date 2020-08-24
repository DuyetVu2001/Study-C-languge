#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void dem_chan_le(int a[], int n){
	int i, demchan = 0, demle = 0;
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 0) demchan++;
		else demle++;
	}
	if(demchan > 0) printf("Day co %d so chan.\n", demchan);
	else printf("Day khong xuat hien so chan!\a\n");
	if(demle > 0) printf("Day co %d so le.\n", demle);
	else printf("Day khong xuat hien so le!\a");
}
int main(){
	int a[100], n = 8;
	printf("Nhap mang co 8 phan tu: \n"); nhap_mang(a, n);
	dem_chan_le(a, n);
	return 0;
}



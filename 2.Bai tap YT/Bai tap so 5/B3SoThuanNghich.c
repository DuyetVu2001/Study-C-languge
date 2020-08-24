#include<stdio.h>
#include<math.h>
#include<string.h>

int hamKiemTraSoThuanNghich(char *a, int );

int main(){
	char a[100];
	printf("Nhap vao day so: ");
	fgets(a, 100, stdin);
	int length = strlen(a) - 1;
	
	if(hamKiemTraSoThuanNghich(a, length))
		printf("La so thuan nghich!");
	else printf("Khong la so thuan nghich!");
	return 0;
}
int hamKiemTraSoThuanNghich(char *a, int n){
	int i, m = 0;
	for(i = 0; i < n/2; i++){
		if(a[i] != a[n-i-1]){
			m = 0;
			break;
		}
		m = 1;
	}
	return m;
}


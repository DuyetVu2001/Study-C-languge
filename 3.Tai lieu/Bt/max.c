#include<stdio.h>
#include<math.h>
void maximumArray(int a[], int kichThuoc, int giaTriMax);
int main(){
	int a[7] = {3,4,5,3,8,6,2};
	printf("Mang moi: "); maximumArray(a, 7, 5);
	return 0;
}
void maximumArray(int a[], int kichThuoc, int giaTriMax){
	int i, max = 5;
	for(i=0; i<kichThuoc; i++){
		if(a[i] < max) a[i] = 0;
		printf("%d\n", a[i]);
	}
}



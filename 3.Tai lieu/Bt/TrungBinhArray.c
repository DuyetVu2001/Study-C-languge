#include<stdio.h>
#include<math.h>
double trungBinhArray(int array[], int kichThuocArray);
int main(){
	int array[4] = {5,4,4,5};
	printf("Trung binh gia tri cac phan tu cua Array: %.3lf", trungBinhArray(array, 4));
	return 0;
}
double trungBinhArray(int array[], int kichThuocArray){
	int i, dem=0, t = 0;
	double tb = 0;
	for(i=0; i<kichThuocArray; i++){
		t += array[i];
		dem++;
	}
	tb = (double)t / dem;
	return tb;
}


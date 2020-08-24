#include<stdio.h>
#include<math.h>
int tongArray(int array[], int kichthuocArray);
int main(){
	int array[4]={5,5,5,4};
	printf("Tong la: %d", tongArray(array, 4));
	return 0;
}
int tongArray(int array[], int kichthuocArray){
	int i, t=0;
	for(i=0; i<kichthuocArray; i++){
		t += array[i];
	}
	return t;
}



#include <stdio.h>
#include <math.h>
#include <string.h>

void del(int *a, int n, int i){
	for(;i < n-1; i++){
		a[i] = a[i+1];
	}
}

void sort(int *a, int n){
	printf("Mang tang dan: ");
	int i = 0, j = 0, index;
	int min;
	for(; n != 0; ){
		min = a[0];
		index = 0;
		for(j = 1; j < n; j++){
			if(min > a[j]){
				min = a[j];
				index = j;
			}
		}	
		del(a, n, index);
		n--;
		printf("\n%d", min);
	}
}

int main(){
	int a[] = {4, 2, 5, 11, 6, 7, 8};
	int n = 7;
	sort(a, n);
	return 0;
}



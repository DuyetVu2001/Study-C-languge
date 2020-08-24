#include<stdio.h>
#include<math.h>
void GTLN(int a[], int n){
	int i, max=a[0], max2 = a[2]; // Khai bao max2 khac vs max;
	for(i=1; i<n; i++){
		if(a[i] > max){
			max2 = max;
			max = a[i];
	}
		else if(max > a[i] && max2 < a[i]){
			max2 = a[i];
	}
	}
	printf("MAX = %d\n", max);
	printf("MAX2 = %d", max2);
}
int main(){
	int a[7] = {5,4,3,2,1}, n = 5;
	GTLN(a, n);
	return 0;
}



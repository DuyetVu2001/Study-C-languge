#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void xoa(char *a){
	int i;
	for(i = 0; i < 5; i++){
		a[i] = a[i+1];
	}
}

//void n(char *a){
//	int i, j, k = 5;
//	int min = a[0];
//	for(i = 0; ; ){
//		for(j = i; j < 5; j++){
//			if(a[j] < min){
//				min = a[j];					
//			}
//			
//		}
//		xoa(a, j, k);
//		k--;
//		printf("\n\n%d", min);
//		break;
//	}
//}

void xuat(char *a){
	int i;
	for(i = 0; i < 4; i++){
		printf("%d\n", a[i]);
	}
}

int main(){
	char a[5] = {2, 0, 3, 2, 1};
	xoa(a);
	xuat(a);
//	n(a);
	return 0;
}



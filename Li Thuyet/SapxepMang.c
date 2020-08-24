#include<stdio.h>
#include<math.h>
void sapXep(int a[]){
	int i, j;
	for(i=0; i<10; i++){
		for(j=9; j>i ; j--){
			if(a[i] > a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void xuat(int a[]){
	int i;
	for(i=0; i<10; i++){
		printf("%d\n", a[i]);
	}
}
int main(){
	int a[10] = {2,4,6,1,35,78,2,4,65,0};
	sapXep(a);
	xuat(a);
	return 0;
}



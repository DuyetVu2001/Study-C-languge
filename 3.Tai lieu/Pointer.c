#include<stdio.h>
#include<math.h>
void changeTime(int *h, int *p, int time){
	*h = time / 60;
	*p = time % 60;
}
int main(){
	int time, gio = 0, phut = 0;
	printf("Nhap vao thoi gian: "); scanf("%d", &time);
	changeTime(&gio, &phut, time);
	printf("%d phut = %d gio + %d phut", time, gio, phut);
	return 0;
}



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n, soBiAn;
	const int MAX=100, MIN=1;
	srand(time(NULL));
	soBiAn = (rand()%(MAX-MIN+1)+MIN);
	printf("%d", soBiAn);
	do{
		printf("Moi ban doan so bi an: ");
		scanf("%d", &n);
			if(n<soBiAn) printf("Lon hon!\n");
			else if(n>soBiAn) printf("Nho hon!\n");
			else printf("\nChuc mung ban da chon dung so bi an!");
	}while (n!=soBiAn);
	return 0;
}



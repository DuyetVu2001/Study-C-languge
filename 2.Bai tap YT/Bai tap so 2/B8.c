#include<stdio.h>
#include<math.h>
int main(){ 
	int a, b;
	scanf("%d%d", &a, &b);
	int m = a * b;
	while ( a != b){
		if (a > b) a = a - b;
		else b = b - a;
	}
	printf("UCLN: %d", b);
	printf("\n\aBCNN: %d", m/b);
	return 0;
}



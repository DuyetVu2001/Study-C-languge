#include<stdio.h>
#include<math.h>
int main(){
	int n=999, i, a, b, c;
	printf("Cac so thoa man la:\n");
	for(i=299; i<=n; i++){
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if(i%6==2 && a+b+c==20) printf("%d\t", i);
	}

	return 0;
}



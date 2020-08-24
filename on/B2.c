#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n>0){
		if(n%2==0) printf("\nSo duong chan!!");
		else printf("\nSo duong le!!");
	}
	else if (n == 0) printf("\nSo 0!!");
	else{
		if(n%2==0) printf("\nSo am chan!!");
		else printf("\nSo am le!!");
	}
	return 0;
}



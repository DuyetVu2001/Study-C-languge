#include<stdio.h>
#include<math.h>
int main(){
	int i, n;
	scanf("%d", &n);
	for(i=2; n!=1;){
		if(n % i == 0){
			printf("\t%d", i);
			n /= i;
		}
		else i++;	
	}
	return 0;
}



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void kt(int n){
	int k = 0;
	while(n != 0){
		k = k * 10 + n % 10;
		n /= 10;
		
	}
	printf("\n\n%d", k);

}

int main(){
	int n = 123321;
	kt(n);
	return 0;
}



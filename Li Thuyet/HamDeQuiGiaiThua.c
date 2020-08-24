#include<stdio.h>
#include<math.h>
long long giaiThua(int n){
	if(n == 0 || n == 1)
		return 1;
	else
		return n * giaiThua(n-1);
}
int main(){
	int i;
	for (i = 0; i < 21; i++){
		printf("%d!=%lli\n", i, giaiThua(i));
	}
	return 0;
}



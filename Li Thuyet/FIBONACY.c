#include<stdio.h>
#include<math.h>
long long fibonacy(int n){
	if(n == 1) return 0;
	else if(n == 2) return 1;
	else
		return fibonacy(n-2) + fibonacy(n-1);
}
int main(){
	int i;
	for(i=1; i<22; i++){
		printf("%lli\n", fibonacy(i));
	}
	return 0;
}



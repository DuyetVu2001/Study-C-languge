#include<stdio.h>
#include<math.h>
int main(){
	int i, n;
	int fn = 1, f1 = 1, f0=1;
	scanf("%d", &n);
	for(i=2; i<=n; i++){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	printf("%d", fn);
	return 0;
}



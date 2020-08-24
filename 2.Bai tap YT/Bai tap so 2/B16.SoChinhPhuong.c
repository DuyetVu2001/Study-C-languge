#include<stdio.h>
#include<math.h>
int main(){
	int m, n, i;
	scanf("%d%d", &m, &n);
	for(i=m; i<=n; i++){
		if(i == (int)sqrt(i)*sqrt(i)){
			printf("%5d", i);
		}
	}
	return 0;
}



#include<stdio.h>
#include<math.h>
int main(){
	int m=5, n=6, i, j;
//	for(i=1; i<=m; i++){
//		for(j=1; j<=n; j++){
//			printf("\t*");
//		}
//		printf("\n\n\n\n");
//	}
	for(i=1; i<=m*n; i++){
		printf(" * ");
		if(i % n == 0) printf("\n");
	}
	return 0;
}



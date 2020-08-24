#include<stdio.h>
#include<math.h>
int main(){
	int i, j, n=8, m=10;
	for(i=1; i<=n; i++){
		for(j=1; j<=m; j++){
			if(i==1 || i==n) printf(" * ");
			else{
				if(j==1 || j==m) printf(" * ");
				else printf("   ");
			}			
		}
		printf("\n");
	}
	return 0;
}



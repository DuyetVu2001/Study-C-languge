#include<stdio.h>
#include<math.h>
int main(){
	int n=99, i;
	for(i=0; i<=n; i++){
		printf("%d\t", i);
		if(i%10==9)
			printf("\n", i);
	}
	return 0;
}



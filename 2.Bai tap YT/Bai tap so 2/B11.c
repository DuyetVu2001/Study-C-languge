#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
	int i = 2, j;
	while( count < n){
		int m = 1;
		for(j = 2; j < i; j++){
			if(i%j == 0){
				m = 0;
				break;
			}
		}	
		if(m == 1){
			printf("%5d", i);
			count++;
		}
		i++;
	}
	return 0;
}

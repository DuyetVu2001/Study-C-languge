#include<stdio.h>
#include<math.h>
int main(){
	int n, dem = 0, i = 2, j;
	scanf("%d", &n);
	while( dem < n){
		int m = 1;
		for(j = 2; j < i; j++){
			if(i%j == 0){
				m = 0;
				break;
			}
		}
		if(m == 1){
			printf("%5d", i);
			dem++;
		}	
		i++;	
	}
	return 0;
}

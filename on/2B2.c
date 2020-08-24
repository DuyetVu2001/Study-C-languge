#include<stdio.h>
#include<math.h>
int main(){
	int n, i, k;
	scanf("%d", &n);
//	for(i=0;i<n;i++){
//		if(i%2==0) printf("\nSo chan nho hon n = %d", i);
//	}
//    for(i=0;i<n;i++){
//    	if(i%2==1) printf("\nSo le nho hon n = %d", i);
//	}	
	k = n/2;
	if(n%2==0){
		for(i=k-1; i<n; i--){
		int a = i*2;
		if(i<0) break;
		printf("%d ", a);
	}
	for(i=k-1;i<n;i--){
		int c=i*2+1;
		if(i<0)break;
		printf("\n%d", c);
	}
}
	if(n%2==1){
		for(i=k; i<n; i--){
			int b = i*2-1;
			if(i<=0)
			break;		
			printf("%d ", b);
		}
		for(i=k; i<n; i--){
			int d=2*k;
			if(i<0)break;
			printf("\n%d", d)
		
	}
}
	return 0;
}



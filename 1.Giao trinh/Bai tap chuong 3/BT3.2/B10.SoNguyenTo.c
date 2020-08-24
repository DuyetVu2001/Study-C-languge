#include<stdio.h>
#include<math.h>
int main(){
	int n, i, m=1;
	scanf("%d", &n);
	
	if(n<2) m=0;
	else{
	for(i=2; i<n; i++){
		if(n%i==0) m=0;  	
	}	
	}
	if(m==0) printf("\nn khong phai so nguyen to!!");
	else printf("\nn la so nguyen to!!");
	return 0;
}



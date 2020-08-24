#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%lli", &n);
	int m=n, tg=0;
	while(m!=0){
		tg = tg*10 + m%10;
		m /= 10;
	}
	if(tg==n) printf("%lli la so thuan nghich!", n);
	return 0;
}

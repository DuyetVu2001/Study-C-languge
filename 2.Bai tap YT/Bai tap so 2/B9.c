#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	scanf("%d", &n);
	int m = 1;
	if( n < 2) m = 0;
	else{
		for( i = 2; i <= sqrt(n); i++)
			if( n % i == 0)
				m = 0;
	}
	if ( m == 0) printf ("\n%d khong phai so nguyen to!", n);
	else printf ("\n%d la so nguyen to!", n);

	return 0;
}



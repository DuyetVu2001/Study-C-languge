#include<stdio.h>
#include<math.h>
int main(){
	int n, m, t=0, i;
	scanf("%d", &n);
	m = n;
	while(n!=0){
		t += n%10;
		n /= 10;
	}
	printf("Tong cac chu so cua %d la: %d\n", n, t);
	printf("Phan tich ra so NT:\n");
	for(i=2; m!=1; ){
		if( m%i == 0){
			printf("%3d", i);
			m = m/i;
		}
		else i++;
	}
	return 0;
}



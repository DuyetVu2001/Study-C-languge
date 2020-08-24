#include<stdio.h>
#include<math.h>
int main(){
	double c = 0.0001, t=0, s=1;
	int n=0, i;
	while((double)1/(2*n+1) > c){
		t +=s*((double)1/(2*n+1));
		s *= -1;
		n++;
	}
	printf("%lf", t*4);
	return 0;
}



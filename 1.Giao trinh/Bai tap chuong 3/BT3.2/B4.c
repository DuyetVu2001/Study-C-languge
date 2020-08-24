#include<stdio.h>
#include<math.h>
int main(){
//	const x50=50, x20=20, x10=10, x5=5;
	int i, j, k, h;
	for(i=1; i<3; i++)
		for(j=1; j<8; j++)
			for(k=1; k<15; k++)
				for(h=1; h<30; h++){
					if(i*50+j*20+k*10+h*5==145)
						printf("%d*50+%d*20+%d*10+%d*5=145\n", i, j, k, h);
				}
							
	return 0;
}



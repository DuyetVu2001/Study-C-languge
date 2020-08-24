#include<stdio.h>
#include<math.h>
void la(int *c){
	(*c)--;
}

int main(){
	int c = 10;
	for(;;){
		la(&c);
		printf("\n%d", c);
		if(c == 5) break;
	}
	return 0;
}



#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
	srand(time(NULL));
	for(i = 0; i < 20; i++){
		int random = 1 + rand()%6;
		printf("%5d", random);
	}
	return 0;
}



#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	void removeTail(char *a){
	int i;
	int size = strlen(a) - 1;
	while(whiteSpace(a[size])){
		a[size] = '\0';
		size--;
	}
}
	return 0;
}



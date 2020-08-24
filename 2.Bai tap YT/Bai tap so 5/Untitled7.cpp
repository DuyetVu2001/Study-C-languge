#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char a[] = "HELLO", b[100];
	fgets(b, 99, stdin);
	int length1 = strlen(a), length2 = strlen(b);
	printf("%d \t %d", length1, length2);
	return 0;
}



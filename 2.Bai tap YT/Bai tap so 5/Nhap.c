#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

bool whiteSpace(char c){
	return c == ' ' || c == '\t' || c == '\n';
}
void removeHead(char *a){
	int i = 0, count = 0;
	while(whiteSpace(a[i])){
		count++;
		i++;
	}
	printf("%d", count);
}
int main(){
	char a[10] = "    	hwewqeqwe";
	removeHead(a);
	int dem = strlen(a);
	printf("\n%d", dem);
}



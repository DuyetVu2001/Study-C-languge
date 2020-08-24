#include<stdio.h>
#include<math.h>

int main(){
	char a[5];
	int i;
	for(i = 0; i < 5; i++){
		scanf("%s", &a[i]);
	}
	printf("Hien thi: \n");
	for(i = 0; i < 5; i++){
		printf("%s", a);
	}
	return 0;
}



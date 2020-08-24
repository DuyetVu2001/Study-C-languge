#include<stdio.h>
#include<math.h>
int main(){
	
	int a[] = {1, 2, 3, 4, 5}, i;
	int *ptr = a;
	
	printf("Dia chi cua mang: %x \n", ptr);
	printf("Dia chi cua mang: %x \n", *ptr);
	printf("Dia chi cua mang: %x \n", &a[0]);
	printf("Dia chi cua mang: %x \n", a[0]);

	for(i = 0 ; i < 5; i++){
		printf("%5d", a[i]);
	}
	printf("\n");
	for(i = 0 ; i < 5; i++){
		printf("%5d", *(ptr+i));
	}
	return 0;
}



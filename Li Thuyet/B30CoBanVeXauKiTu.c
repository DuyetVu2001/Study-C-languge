#include<stdio.h>
#include<math.h>
int main(){
	char c = getchar();
//	scanf("%c", &c); tuong dung getchar();
	printf("%d", c);
	printf("\n%c\n", c);
	fflush(stdin); // xoa bo dem.
//	char string[] = "Hello world!!";
//	printf("\n%s", string);
	char str[100];
	gets(str);//Nhap vao mot xau ki tu.
	printf("%s", str);
	return 0;
}



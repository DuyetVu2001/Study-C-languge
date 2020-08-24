#include<stdio.h>
#include<math.h>
#include<string.h>

const char x[]={ // mang doi chieu
		'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H',
		'I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','Y','Z','W'
	};
	
int main(){
	int k , b;
	char s[100];
	printf("Nhap vao gia tri thap phan k va he so chuyen doi b: ");
	scanf("%d%d", &k, &b);
	int tmp, i = 0;
	while(k){
		tmp = k % b; // Lay phan du
		s[i++] = x[tmp];
		k /= b;
	}
	s[i] = '\0';
	strrev(s);
	puts(s);
	return 0;
}



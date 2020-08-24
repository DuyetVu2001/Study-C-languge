#include<stdio.h>
#include<math.h>
void kiem_tra(n){
	int k1, k2, tang = 0, giam = 0;
	k1 = n % 10; // dem lui tu cuoi len
	n /= 10;
	while(n){
		
		k2 = n % 10;
		n /= 10;
		if(k1 > k2) tang = 1;
		if(k1 < k2) giam = 1;
		k1 = k2;
	}

	if(tang == 0 && giam == 0) printf("Bang nhau.");
	else if(giam == 1 && tang == 0) printf("Giam.");
	else if(tang && giam == 0) printf("Tang.");
	else printf("Ko tang ko giam.");
}
int main(){
	int n;
	printf("Nhap vao so nguyen duong n: "); scanf("%d", &n);
	int k, demChan = 0, demLe = 0, t = n, k1, k2;
	
	while(t){
		k = t % 10;
		
		if(k % 2 == 0) demChan++;
		else demLe++;
		t /= 10;
	}
	printf("a,So %d co %d chu so chan va %d chu so le.\n", n, demChan, demLe);
	kiem_tra(n);
	return 0;
}



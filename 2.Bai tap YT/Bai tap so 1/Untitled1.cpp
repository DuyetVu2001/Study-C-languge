#include<stdio.h>
#include<math.h>
int a[100];
void nhapmang(i;int n){
	printf("nhap vao do gia tri:");
	scanf("%d",&n);
	printf("nhap vao cac phan tu :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void sapsep(int i; int n){
for(int i;i<n-1;i++){
	for(int j=0;j<n;j++){
		int tg;
		if(a[i]<a[j]){
			tg=a[i];
			a[j]=a[i];
			a[j]=tg;
		}
	}
 	
}
}
int main(){
	nhapmang(i;n);
	

	return 0;
}



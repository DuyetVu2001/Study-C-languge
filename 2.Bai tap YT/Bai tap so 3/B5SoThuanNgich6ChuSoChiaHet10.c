#include<stdio.h>
#include<math.h>
int kT_TN(int i){
	int t = 0;
	int	m = i;
	while(m != 0){
		t = t * 10 + m % 10;
		m /= 10;			
	}
	return (t == i);
} 
int Kt_10(int i){
	int tg = 0; 
	int	m = i;
	while(m != 0){
		tg += m % 10;
		m /= 10;			
	}
	return (tg % 10 == 0);
}	
int main(){
	int i, t = 0, tg = 0;
	printf("Cac so thuan nghich co 6 chu so co tong cac chu so chia het cho 10 la:\n");
	for(i = 100000; i < 1000000; i++){
		if(kT_TN(i) && Kt_10(i)) printf("%d\t", i);
	}
	return 0;
}





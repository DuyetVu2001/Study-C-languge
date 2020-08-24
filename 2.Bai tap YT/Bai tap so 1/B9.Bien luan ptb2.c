#include<stdio.h>
#include<math.h>
int main(){
	
	float a, b, c, delta;
	do{
	scanf("%f%f%f", &a, &b, &c);
	delta = b*b - 4*a*c;
	if( a==0 ){
		if( b!=0 )printf("\n\aPhuong trinh co nghiem duy nhat x = %f", -c/b);
		else{
			if( c==0 ) printf("\n\aPhuong trinh vo so nghiem!!");
			else printf("\n\aPhuong trinh vo nghiem!!");
		}
	}
	else{
		if( delta > 0) printf("\n\aPhuong trinh co hai nghiem phan biet:x1 = %f \nx2 = %f",
		 (-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));	
   		else if( delta == 0) printf ("\n\a Phuong trinh co nghiem kep x = %f", -b/(2*a));
   		else printf("\n\aPhuong trinh vo nghiem!!");
   		
	} 
	}while( a>=0 );
	

	return 0;
}



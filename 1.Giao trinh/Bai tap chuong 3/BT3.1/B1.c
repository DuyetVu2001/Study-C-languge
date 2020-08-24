#include<stdio.h>
#include<math.h>
int main(){
	float x, y, z, a, b , c, e, f, g;
	scanf("%f%f%f", &x, &y, &z);
	
	a = x - y;
	b = y - z;
	c = z - x;
	e = x + y;
	f = y + z;
	g = z + x;
	printf("\nx = %f", x);
	printf("\ny = %f", y);
	printf("\nx - y = %f", a);	
	printf("\ny - z = %f", b);	
	printf("\nz - x = %f", c);	
	int max = x;
	
	if(max < y) max = y;
	if(max < a) max = a;
	if(max < b) max = b;
	if(max < c) max = c;
	
	if(x == y && x == a && x == c) printf ("\nKhong co gia tri lon nhat.");
	
	printf("\n\aMAX t = %f", max);
	
	int min = y;
	printf("\nx + y = %f", e);	
	printf("\ny + z = %f", f);	
	printf("\nz + x = %f", g);
	printf("\ny = %f", y);
	printf("\nz = %f", z);	
	
	if(min > z) min = z;
	if(min > e) min = e;
	if(min > f) min = f;
	if(min > g) min = g;
	if(y == z && y == f && y == g) printf ("\nKhong co gia tri nho nhat.");
		
	printf("\nMIN s = %f", min);
	
	return 0;
}



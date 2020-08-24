#include<stdio.h>
#include<math.h>
int main(){
	int x , y, z;
	for(x = 1 ; x <100/5 ;x++)
	{
		for(y = 1 ; y <= 100/3 ; y++)
		{
			for(z = 1 ; z <= 100 ; z++)
			{
				if(x + y + z == 100 && 5 * x + 3 * y + z / 3 == 100)
				{
					printf("So trau dung la: %d",x);
					printf("\nSo trau nam la: %d",y);
					printf("\nSo trau gia la: %d\n\n",z);
				}
				
			}
		}
	}

	return 0;
}



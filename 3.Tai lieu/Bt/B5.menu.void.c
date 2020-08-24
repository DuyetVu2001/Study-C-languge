#include<stdio.h>
#include<math.h>
int menu(){
	int luaChon = 0;
	
//	if(luaChon<1 || luaChon>4){
		while(luaChon<1 || luaChon>4){
		printf("\t===Menu===\n");
		printf("1. Pho\n");
		printf("2. Bun bo Hue\n");
		printf("3. Mi Quang\n");
		printf("4. Thit cay\n");
		printf("Lua chon cua ban?\n");
		scanf("%d", &luaChon);
		if(luaChon<1 || luaChon>4) printf("Sai gia tri!"); break;
		}
//	}
//	else printf("Sai gia tri!");
	return luaChon;
}
int main(){
	switch(menu()){
		case 1:
			printf("Pho");
			break;
		case 2: printf("Bun"); break;
		case 3: printf("Mi"); break;
		case 4: printf("Thit cay"); break;
	}
	return 0;
}

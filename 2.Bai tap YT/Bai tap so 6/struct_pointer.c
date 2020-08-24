/*
	****** struct vs cap phat bo nho dong trong C *****	
	-phan 1: gioi thieu cach cap phat, thu hoi bo nho dong
	-phan 2: cap phat dong cho bien cau truc co du lieu thanh phan la con tro
	-phan 3: cap phat dong cho con tro cau truc chua du lieu thanh phan la con tro
*/
#include<stdio.h>
#include<stdlib.h>

//dinh nghia kieu struct dat ten la Person
typedef struct {
	char *firstName;
	char *lastName;
	int age;
} Person;

void pointerOfPrimitiveType(){
	
	char *name;
	int *ptr, value = 100, arr[100];
	//	ptr= &value;
	//malloc:
	// su dung name nhu bien thuong:
//	ptr = malloc(sizeof(int));
	//calloc
	ptr = calloc(1,sizeof(int));
	*ptr = 100;
	printf("%d", *ptr);
	free(ptr); // giai phong bo nho da cap phat cho bien ptr
	// sd nhu bien mang:
	ptr = arr; // ptr= &arr;
//	ptr = malloc(100*sizeof(int)) ; // cap phat mang int gom 100 phan tu ptr[100];
	ptr = calloc(100, sizeof(int));
	ptr[1] = 120;ptr[0] = 165;
	printf("\nptr[0]= %d, ptr[1]= %d",ptr[0], ptr[1]);
	free(ptr);
}

void structureMembersIsPointer(){
	Person p;
	//nho cap phat cho du lieu thanh phan( members ) cua struct truoc khi su dung
	p.firstName = malloc(sizeof(char)*100);
	p.lastName = malloc(sizeof(char)*100);
	// dem su dung
	gets(p.firstName);
	puts(p.firstName);
	// nho giai phong, thu hoi bo nho 
	free(p.firstName);
	free(p.lastName);
}

void structurePointerPointToStructPointerMembers(){
	Person *p;
	p = calloc(1, sizeof(Person)); // coi con tro p nhu mot bien cau truc binh thuong
	// cap phat cho members cu no
	p->firstName = calloc(100, sizeof(char));
	p->lastName = calloc(100, sizeof(char));
	// dem su dung
	puts("enter your first name: ");
	gets(p->firstName);
	puts("enter your last name: ");
	gets(p->lastName);
	puts("enter your age: ");
	scanf("%d", &p->age);
	
	printf("\nPerson info: \nFirst Name: %s\nLast Name: %s\nAge: %d",
		p->firstName, p->lastName, p->age);		
	
	free(p->firstName); // thu hoi bo nho da cap phat cho con tro firstName
	free(p->lastName); 	// giai phong bo nho da cap phat cho con tro lastName
	free(p);			// giai phong bo nho da cap phat cho con tro cau truc p
}

int main(){
	// cap phat cach 1: malloc(size*size_of_type);
	// cap phat cach 2: calloc(size, size_of_type);
	// thu hoi: free(ten_con_tro);
	
//	pointerOfPrimitiveType();
//	structureMembersIsPointer();
	structurePointerPointToStructPointerMembers();
	return 0;
}

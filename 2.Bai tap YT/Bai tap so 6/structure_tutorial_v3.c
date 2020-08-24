/*
	****** struct trong ngon ngu C *****
	-khoi tao gia tri cho bien struct
	-su dung keyword typedef
*/
#include<stdio.h>
#include<stdlib.h>

//dinh nghia struct ten la Person
typedef struct {
	char *firstName;
	char *lastName;
	int age;
} Person /* p1, p2, *ptr, px[] */;
//typedef struct Person Person;

int main(){
//	typedef struct Person Person;
//	typedef struct Person Person;
//	struct Person person;
	Person person={
		"Hoa", "Nguyen", 20
	};
	
	Person *ptr, x[100], hhh;
	
	// gan gia tri cho bien thanh phan cua struct
//	person.firstName= "Hoa";
//	person.lastName= "Nguyen";
//	person.age= 20;

	
	printf("\nPerson info: \nFirst Name: %s\nLast Name: %s\nAge: %d",
		person.firstName, person.lastName, person.age);		
	
	return 0;
}



#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char *firstName;
	char *lastName;
	int age;
} Person;

void getPerson(Person *p){
	p->firstName = malloc(50*sizeof(char));
	p->lastName = malloc(50*sizeof(char));
	printf("Enter your first name: ");
	scanf("%s", p->firstName);
	
	printf("Enter your last name: ");
	scanf("%s", p->lastName);
	
	printf("Enter your age: ");
	scanf("%d", &p->age);
	
}

void showInfo(const Person person){
	printf("\nPerson info: \nFirst name: %s\nLast name: %s\nAge: %d",
		person.firstName, person.lastName, person.age);
}

void modify(Person *ptr){
	ptr->firstName = "Nhan";
}
int main(){
	Person person;
	getPerson(&person);
	printf("Before modify: ");
	showInfo(person);
	modify(&person);
	printf("\nAfter modify: ");
	showInfo(person);
	return 0;
}



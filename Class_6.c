#include<stdio.h>

struct student {
	char name[50];
	int age;
	int id;
};


int main() {
	struct student person, test;

	printf("Enter your name:\n");
	gets(person.name);
	printf("Enter your age:\n");
	scanf("%d", &person.age);
	printf("Enter your id:\n");
	scanf("%d", &person.id);

	printf("\nOutput\n");
	printf("Name = %s\n", person.name);
	printf("Age = %d\n", person.age);
	printf("Id = %d\n", person.id);


	printf("\n%s\n", test.name);
}
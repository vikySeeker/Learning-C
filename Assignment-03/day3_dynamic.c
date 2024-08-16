#include<stdio.h>

/*
 * using %m modifier in printf to get user input of dynamic size.
 */
int main() {
	char *firstName;
	char *lastName;
	printf("Enter your first name: ");
	scanf("%ms", &firstName);
	printf("Enter your last name: ");
	scanf("%ms", &lastName);
	printf("Welcome, %s %s\n", firstName, lastName);
	return 0;
}

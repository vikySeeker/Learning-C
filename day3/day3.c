#include<stdio.h>


/*
 * when using char[] of fixed length, scanf() is considered as unsafe.
 * As it does not limit the user input for the given buffer size.
 * instead we can use fgets() to get input with limited size.
 */
int main() {
	char firstName[10];
	char lastName[10];
	printf("Enter your frist name: ");
	scanf("%s", firstName);
	printf("Enter your last name: ");
	scanf("%s", lastName);
	printf("Welcome, %s %s\n", firstName, lastName);
	return 0;
}

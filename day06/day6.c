#include<stdio.h>

int main() {
	int numerator, denominator;
	printf("Enter numerator: ");
	scanf("%d", &numerator);
	printf("Enter Denominator: ");
	scanf("%d", &denominator);
	if(numerator % denominator == 0) {
		puts("There is no reminder!");
	} else {
		puts("There is a remainder!");
	}
	return 0;
}

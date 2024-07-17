#include<stdio.h>

int main() {
	int num = 0;
	printf("Enter a number between 1-500: ");
	scanf("%d", &num);
	if(num >= 1 && num <= 100) {
		printf("The number is in the range of 1-100\n");
	} else if(num >= 101 && num <= 200) {
		printf("The number is in the range of 101-200\n");
	} else if(num >= 201 && num <= 300) {
		printf("The number is in the range of 201-300\n");
	} else if(num >= 301 && num <= 400) {
		printf("The number is in the range of 301-400\n");
	} else if(num >= 401 && num <= 500) {
		printf("The number is in the range of 401-500\n");
	} else {
		puts("Your number is out of range you ばか!");
	}
	return 0;
}

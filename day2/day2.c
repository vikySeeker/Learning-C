#include<stdio.h>

int main() {
	int a = 5;
	float b = 3.147;
	double c = 65536.678;
	char d = 'a';
	char e[] = "Hello, World!\0";
	printf("%d is an integer!\n%f is a float!\n%lf is a double!\n%c is a character!\n%s is an array of characters! \n", a, b, c, d, e);
	return 0;
}

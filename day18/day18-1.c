#include<stdio.h>

void hello() {
	char array[] = {72, 101, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};	//simply adding 0 also works instead of '\0';

	printf("%s", array);
}

int main() {
	hello();
	return 0;
}

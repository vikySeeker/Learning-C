#include<stdio.h>

int main(int argc, char **argv) {
	if(argc != 3) {
		puts("Usage: ./day9 firstname lastname");
		return 1;
	}

	printf("Hello, %s %s\n", argv[1], argv[2]);

	return 0;
}

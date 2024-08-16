#include<stdio.h>

struct Simp {
	int num;
	char ch;
	float dec;
};

int main() {
	struct Simp simp;
	simp.num = 69;
	simp.ch = 'F';
	simp.dec = 3.14;

	printf("This is the int: %d, this is the char: %c, this is the float: %.2f\n", simp.num, simp.ch, simp.dec);
}

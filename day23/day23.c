#include<stdio.h>

struct example {
	int number;
};

int main() {
	struct example *example_ptr1;
	struct example test;

	example_ptr1 = &test;

	test.number = 69;
	printf("Assigned value %d via the test instance of example pointer using dot operator!\n", test.number);

	(*example_ptr1).number = 96;
	printf("Assigned value %d via the example_ptr1 pointer of test instance using dot operator!\n", (*example_ptr1).number);

	example_ptr1->number = 37;
	printf("Assigned value %d via the example_ptr1 pointer of test instance using indirect membership operator(->)!\n", example_ptr1->number);
}

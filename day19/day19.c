#include<stdio.h>
#include<stdlib.h>

int main() {
	char *array = (char*)malloc(sizeof(char)*11);
	if(array == NULL) {
		fprintf(stderr, "Error: Memory Allocation Failed!\n");
		return 1;
	}
	printf("Memory Allocated Successfully!\n");
	free(array);	
	return 0;
}

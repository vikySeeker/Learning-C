#include<stdio.h>

int main() {
	int arr[] = {3, 4, 5, 6, 7, 2, 4, 92};
	printf("The size of array is :%d\n", sizeof(arr)/sizeof(arr[0]));
	return 0;
}

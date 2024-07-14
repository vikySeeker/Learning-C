#include<stdio.h>

int main() {
	int input = 0;
	printf("Enter number of seconds: ");
	scanf("%d", &input);
	if(input < 0) {
		printf("Time cannot be negative you ばか!\n");
		return 0;
	}
	int seconds = 0, minutes = 0, hours = 0;
	if(input < 60) {
		seconds = input;
	} else if(input < 3600) {
		minutes = input/60;
		seconds = input%60;
	} else {
		hours = input/3600;
		int remsecs = input%3600;
		minutes = remsecs/60;
		seconds = remsecs%60;
	}
	printf("%d seconds is equal to %d Hours, %d Minutes and %d seconds.\n", hours, minutes, seconds);
	return 0;
}

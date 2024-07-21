#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int limit = 2;
	int flipcount = 0;
	srand(time(0));
	printf("How many times do you want to flip the coin? ");
	scanf("%d", &flipcount);
	int value = 0;
	int heads = 0, tails = 0;

	/*
	 * using % to get the remainder vaule of the rand() \
	 * function since we only need two different values one for head and one for tails.
	 * Adding 1 to make the value range from 1-2.
	 * if the resulting value is 1 then it represents heads.
	 * if the resulting value is 2 then it represents tails.
	 */
	for(int i=0; i<flipcount; i++) {
		value = (rand()%2)+1;	
		if(value == 1) {
			heads++;
		} else {
			tails++;
		}
	}
	printf("%d heads\n%d tails\n", heads, tails);
	return 0;
}

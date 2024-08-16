#include<stdio.h>

enum day {
	SUNDAY = 1,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

int main() {
	enum day today;
	int weekofday;
	printf("Which day of the week is today?");
	scanf("%d", &weekofday);
	today = weekofday;
	
	switch(today) {
		case SUNDAY:
			printf("Today is Sunday!\n");
			break;
		case MONDAY:
			printf("Today is Monday!\n");
			break;
		case TUESDAY:
			printf("Today is Tuesday!\n");
			break;
		case WEDNESDAY:
			printf("Today is Wednesday!\n");
			break;
		case THURSDAY:
			printf("Today is Thursday!\n");
			break;
		case FRIDAY:
			printf("Today is Friday!\n");
			break;
		case SATURDAY:
			printf("Today is Saturday!\n");
			break;
		default:
			fputs("Invalid Input! Day can only be between 1-7\n", stderr);
			break;
	}
}

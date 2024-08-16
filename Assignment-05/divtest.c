#include<stdio.h>

int main() {
	float input;
	scanf("%f", input);
	float hours, mins, seconds;
	hours = (int)input/3600;
	mins = (int)(seconds - (hours*3600))/60;
	seconds = (seconds - (hours * 3600) - (mins * 60));
	printf("%f %f %f", hours, mins, seconds);
	return 0;
}

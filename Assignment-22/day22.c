#include<stdio.h>

struct stats {
	int points;
	int game;
};

int main() {
	struct stats player[5];
	int counter = 0;
	struct stats *p;
	for(;counter < 5; counter++) {
		p = &player[counter];
		printf("Enter Player %d's point total: ", counter+1);
		scanf("%d", &p->points);
		printf("Enter Player %d's game total: ", counter+1);
		scanf("%d", &p->game);
	}

	for(int i=1; i <= counter; i++) {
		p = &player[i-1];
		printf("Player %d's scoring average was %.2f ppg.\n", counter, (float)p->points/p->game);
	}
}

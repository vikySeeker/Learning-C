#include<stdio.h>

int main() {
	int score[4][5];	// score array to store scores of all 5 player in all 4 games.
	int players_total[5];	// array to store total score scored by all 5 players.
	int highest_score = 0;	// to score highest score among all 5 players.
	int player_id = 0;	// player id of player that scored highest score.

	/*
	 * loop to get input score of 5 players in all 4 games.
	 */
	for(int game=0; game<4; game++) {
		printf("Game #%d\n", game+1);
		for(int player = 0; player < 5; player++) {
			printf("Enter scoring total for Player #%d: ", player+1);
			scanf("%d", &score[game][player]);
		}
	}
	
	/*
	 * loop to evaluate highest score among all scores.
	 */
	for(int player = 0; player<5; player++) {
		int player_total = 0;
		for(int game = 0; game<4; game++) {
			player_total += score[game][player];
		}
		players_total[player] = player_total;
		if(highest_score < players_total[player]) {
			player_id = player + 1;
			highest_score = players_total[player];
		}
	}

	// average score of highest score on all four games. aka points per game.
	float player_average = (float)highest_score/4.0;

	printf("Player #%d is the Top Player with the average score of %.2f!\n in all four game.", player_id, player_average);
	return 0;
}

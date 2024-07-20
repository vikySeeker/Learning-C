#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define INITIAL_CAP 5

int main() {
/*	
 * basic to that don't uses array to get score input
 * instead adds user input directly.
 */

 /*	float totalscore = 0;
	float currscore = 0;
	char ch = 'Y';
	int scorecount=0;
	for(;ch != 'N' && ch != 'n';scorecount++) {
		printf("Enter a test score: ");
		scanf("%f", &currscore);
		getchar();
		totalscore += currscore;
		printf("Would you like to continue? (Y/N)");
		ch = getchar();
	}
	printf("Average score is: %.2f\n", (totalscore/scorecount));
*/

	int *arr = (int*)malloc(sizeof(int)*INITIAL_CAP);
	if(arr == NULL) {
		fprintf(stderr, "Falied to allocate score array!\n");
		return 1;
	}
	int current_size = INITIAL_CAP;
	char *decision = "Y";
	int score_count = 0;


	/*
	 * Main loop that gets score input from user
	 * dynamically reallocates the score array capacity to fit user score inputs
	 * get user comfirmation to get another score form user
	 */
	for(;strncmp(decision, "N", 1) != 0;) {
		if(score_count == current_size) {
			current_size = score_count + INITIAL_CAP;
			arr = (int*)realloc(arr, sizeof(int)*current_size);
			if(arr == NULL) {
				fprintf(stderr, "Falied to reallocate score array!\n");
				return 1;
			}
		}
		printf("Enter a test score: ");
		scanf("%d", arr+score_count);
		getchar();
		printf("Would you like to continue? (Y/N)");
		scanf("%ms", &decision);
		score_count++;
	}

	float total_score = 0;
	
	/*
	 * Loop through all scores given by user and add it to get total score
	 */
	for(int i=0; i<score_count; i++) {
		total_score += *(arr+i);
	}
	printf("\n%.2f is the average score!\n", total_score/score_count);
	free(decision);
	free(arr);
	return 0;
}

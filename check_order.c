#include <bits/types/struct_timeval.h>
#include <stdio.h>
#include <time.h>
#include <sys/time.h>

#define ATTEMPTS 10000

int main(void) {

	float diff_time[10][ATTEMPTS];
	struct timeval before;
	struct timeval after;

	for (int i = 0; i < ATTEMPTS; i++) {
		printf("Attempts: %d\n", i + 1);
		for(int j = 0; j < 10; j++ ) {
			// Get current time
			gettimeofday(&before, NULL);

			switch (j) {
				case 0:
					printf("hoge\n");
					break;
				case 1:
					printf("hoge\n");
					break;
				case 2:
					printf("hoge\n");
					break;
				case 3:
					printf("hoge\n");
					break;
				case 4:
					printf("hoge\n");
					break;
				case 5:
					printf("hoge\n");
					break;
				case 6:
					printf("hoge\n");
					break;
				case 7:
					printf("hoge\n");
					break;
				case 8:
					printf("hoge\n");
					break;
				case 9:
					printf("hoge\n");
					break;	
				default:
					printf("hoge\n");
					break;
			}

			gettimeofday(&after, NULL);
			
			diff_time[j][i] = after.tv_sec - before.tv_sec + (float)(after.tv_usec - before.tv_usec) / 1000;

			printf("%d: %.3f\n", j, diff_time[j][i]);
		}
	}

	for (int i = 0; i < 10; i++) {
		float sum = 0;
		for (int j = 0; j < ATTEMPTS; j++) {
			sum += diff_time[i][j];
		}
		printf("Average execution time of case %d: %.8f\n", i, sum / ATTEMPTS);
	}

	return 0;
}

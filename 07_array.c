/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>

#define RED_ANSI        "\033[0;31m"
#define ORANGE_ANSI     "\033[31m"
#define YELLOW_ANSI     "\033[0;33m"
#define GREEN_ANSI      "\033[0;32m"
#define BLUE_ANSI       "\033[0;34m"
#define INDIGO_ANSI     "\033[36m"
#define PURPLE_ANSI     "\033[0;35m"
#define RESET_ANSI      "\033[0m"

int main() {
	int colors[7] = {0,};

	colors[0] = 1;  // red
	colors[1] = 0;  // orange
	colors[2] = 0;  // yellow
	colors[3] = 1;  // green
	colors[4] = 0;  // blue
	colors[5] = 1;  // indigo
	colors[6] = 0;  // purple

	if (colors[0]) {
		printf("%sred1:    %d%s\n", RED_ANSI, colors[0], RESET_ANSI);
	} 

	if (colors[1]) {
		printf("%sorange: %d%s\n", ORANGE_ANSI, colors[1], RESET_ANSI);
	} 

	if (colors[2]) {
		printf("%syellow: %d%s\n", YELLOW_ANSI, colors[2], RESET_ANSI);
	}

	if (colors[3]) {
		printf("%sgreen:  %d%s\n", GREEN_ANSI, colors[3], RESET_ANSI);
	} 

	if (colors[4]) {
		printf("%sblue:   %d%s\n", BLUE_ANSI, colors[4], RESET_ANSI);
	}

	if (colors[5]) {
		printf("%sindigo: %d%s\n", INDIGO_ANSI, colors[5], RESET_ANSI);
	}

	if (colors[6]) {
		printf("%spurple: %d%s\n", PURPLE_ANSI, colors[6], RESET_ANSI);
	} 

	return 0;
}

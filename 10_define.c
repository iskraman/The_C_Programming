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

#define RED_COLOR		0
#define ORANGE_COLOR	1
#define YELLOW_COLOR	2
#define GREEN_COLOR		3
#define BLUE_COLOR		4
#define INDIGO_COLOR	5
#define PURPLE_COLOR	6
#define MAX_COLOR_NUM	7

int main() {
	int rainbow[MAX_COLOR_NUM] = {0,};

	rainbow[RED_COLOR] 		= 1;
	rainbow[GREEN_COLOR] 	= 1;
	rainbow[INDIGO_COLOR] 	= 1;

	for (int i=0; i < 7; i++) {
		if (i == 0 && colors[i]) {
			printf("%sred:    %d%s\n", RED_ANSI, colors[i], RESET_ANSI);
		} else if (i == 1 && colors[i]) {
			printf("%sorange: %d%s\n", ORANGE_ANSI, colors[i], RESET_ANSI);
		} else if (i == 2 && colors[i]) {
			printf("%syellow: %d%s\n", YELLOW_ANSI, colors[i], RESET_ANSI);
		} else if (i == 3 && colors[i]) {
			printf("%sgreen:  %d%s\n", GREEN_ANSI, colors[i], RESET_ANSI);
		} else if (i == 4 && colors[i]) {
			printf("%sblue:   %d%s\n", BLUE_ANSI, colors[i], RESET_ANSI);
		} else if (i == 5 && colors[i]) {
			printf("%sindigo: %d%s\n", INDIGO_ANSI, colors[i], RESET_ANSI);
		} else if (i == 6 && colors[i]) {
			printf("%spurple: %d%s\n", PURPLE_ANSI, colors[i], RESET_ANSI);
		} else {
			printf("colorless!\n");
		}
	}

	return 0;
}

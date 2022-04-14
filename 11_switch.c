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

	for (int i=RED_COLOR; i < MAX_COLOR_NUM; i++) {
		switch (i) {
			case RED_COLOR:
				if (rainbow[i]) 
					printf("%sred:    %d%s\n", RED_ANSI, rainbow[i], RESET_ANSI);
				break;
			case ORANGE_COLOR:
				if (rainbow[i])
					printf("%sorange: %d%s\n", ORANGE_ANSI, rainbow[i], RESET_ANSI);
				break;
			case YELLOW_COLOR:
				if (rainbow[i])
					printf("%syellow: %d%s\n", YELLOW_ANSI, rainbow[i], RESET_ANSI);
				break;
			case GREEN_CLOR:
				if (rainbow[i])
					printf("%sgreen:  %d%s\n", GREEN_ANSI, rainbow[i], RESET_ANSI);
				break;
			case BLUE_COLOR:
				if (rainbow[i])
					printf("%sblue:   %d%s\n", BLUE_ANSI, rainbow[i], RESET_ANSI);
				break;
			case INDIGO_COLOR:
				if (rainbow[i])
					printf("%sindigo: %d%s\n", INDIGO_ANSI, rainbow[i], RESET_ANSI);
				break;
			case PURPLE_COLOR:
				if (rainbow[i])
					printf("%spurple: %d%s\n", PURPLE_ANSI, rainbow[i], RESET_ANSI);
				break;
			default:
				printf("colorless!\n");
				break;
		}
	}

	return 0;
}

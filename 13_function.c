/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>
#include "13_function.h"

int main() {
	int rainbow[MAX_COLOR_NUM] = {0,};

	rainbow[RED_COLOR] 		= 1;
	rainbow[GREEN_COLOR] 	= 1;
	rainbow[INDIGO_COLOR] 	= 1;

	print_rainbow(rainbow);

	return 0;
}

void print_rainbow(int rainbow[MAX_COLOR_NUM]) 
{
	for (rainbow_color_t i=RED_COLOR; i < MAX_COLOR_NUM; i++) {
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
			case GREEN_COLOR:
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
}

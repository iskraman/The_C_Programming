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
	int red = 5;
	int orange = 0;
	int yellow = 1;
	int green = 0;
	int blue = 0;
	int indigo = 3;
	int purple = 0;

	if (red == 1) {
		printf("%sred1:    %d%s\n", RED_ANSI, red, RESET_ANSI);
	} else if (red == 2) {
		printf("%sred2:    %d%s\n", RED_ANSI, red, RESET_ANSI);
	} else if (red == 3) {
		printf("%sred3:    %d%s\n", RED_ANSI, red, RESET_ANSI);
	} else {
		printf("It's not red\n");
	}

	if (orange) {
		printf("%sorange: %d%s\n", ORANGE_ANSI, orange, RESET_ANSI);
	} else {
		printf("It's not orange\n");
	}

	if (yellow) {
		printf("%syellow: %d%s\n", YELLOW_ANSI, yellow, RESET_ANSI);
	} else {
		printf("It's not yellow\n");
	}

	if (green) {
		printf("%sgreen:  %d%s\n", GREEN_ANSI, green, RESET_ANSI);
	} else {
		printf("It's not green\n");
	}

	if (blue) {
		printf("%sblue:   %d%s\n", BLUE_ANSI, blue, RESET_ANSI);
	} else {
		printf("It's not blue\n");
	}

	if (indigo) {
		printf("%sindigo: %d%s\n", INDIGO_ANSI, indigo, RESET_ANSI);
	} else {
		printf("It's not indigo\n");
	}

	if (purple) {
		printf("%spurple: %d%s\n", PURPLE_ANSI, purple, RESET_ANSI);
	} else {
		printf("It's not purple\n");
	}

	return 0;
}

/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>

int main() {
	int green;
	int red = 1;
	printf("red1: %d\n", red);

	green = 7;
	red = 2;
	printf("red2: %d\n", red);

	{
		red = 3;
		printf("red3: %d\n", red);
	}

	printf("red: %d\n", red);
	return 0;
}

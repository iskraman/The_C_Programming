/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>

void print_color(const int color);
int change_color(int color);

int main() {
	int red = 0;
	print_color(red);

	red = change_color(red);
	print_color(red);
	return 0;
}

int change_color(int color) {
	color = 1;
	return color;
}

void print_color(const int color) {
	printf("color: %d\n", color);
}

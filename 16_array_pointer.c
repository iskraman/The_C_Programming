/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>

void init_rainbow(int *rainbow) {
	rainbow[0] = 1;
	rainbow[1] = 2;
	*(rainbow + 2) = 10;
	*(rainbow + 3) = 20;
}

int main() {
	int rainbow[7] = {0,};

	init_rainbow(rainbow);

	printf("rainbow[0]: %d\n", rainbow[0]);	// 1
	printf("rainbow[1]: %d\n", rainbow[1]); // 2
	printf("rainbow[2]: %d\n", rainbow[2]); // 10
	printf("rainbow[3]: %d\n", rainbow[3]);
	return 0;
}

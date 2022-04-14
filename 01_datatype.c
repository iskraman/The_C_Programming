/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>

int main() {
	printf("char size: %ld\n", sizeof(char));		// 1
	printf("short size: %ld\n", sizeof(short));		// 2
	printf("int size: %ld\n", sizeof(int));			// 4
	printf("long int size: %ld\n", sizeof(long));	// 8
	printf("float size: %ld\n", sizeof(float));		// 4
	printf("double size: %ld\n", sizeof(double));	// 8

	printf("char* size: %ld\n", sizeof(char*));		// 1
	printf("short* size: %ld\n", sizeof(short*));		// 2
	printf("int* size: %ld\n", sizeof(int*));			// 4
	printf("long* int size: %ld\n", sizeof(long*));	// 8
	printf("float* size: %ld\n", sizeof(float*));		// 4
	printf("double* size: %ld\n", sizeof(double*));	// 8
	return 0;
}

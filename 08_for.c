/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        // if (i % 2 == 0)
        if (i == 2 || i == 4 || i == 6) {
            continue;
        }

        if (i == 8) {
            break;
        }

        printf("i = %d\n", i);
    }

    return 0;
}
~

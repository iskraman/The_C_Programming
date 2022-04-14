# C언어 강의

**[00_main.c]**

```c
#include <stdio.h>

int main() {
        printf("Hello, world\n");
        return 0;
}
```

헤더와 함수의 구성 요소에 대해 알아 봅니다.

함수를 구성하는 요소로는 데이터 타입, 함수명, 중괄호, 세미콜론, 리턴값등이 있으며

main() 함수는 프로그램이 시작되는 매우 특별한 함수명입니다.

또한, C언어 라이브러리가 제공하는 printf() 함수의 사용법과 

이를 사용하기 위해 stdio.h 헤더를 include 해야 하는 이유를 설명합니다.

---

**[01_datatype.c]**

```c
#include <stdio.h>

int main() {
        printf("char size: %lu\n", sizeof(char));
        printf("short size: %lu\n", sizeof(short));
        printf("int size: %lu\n", sizeof(int));
        printf("long int size: %lu\n", sizeof(long int));
        printf("float size: %lu\n", sizeof(float));
        printf("double size: %lu\n", sizeof(double));

        printf("char size: %lu\n", sizeof(char*));
        printf("short size: %lu\n", sizeof(short*));
        printf("int size: %lu\n", sizeof(int*));
        printf("long int size: %lu\n", sizeof(long int*));
        printf("float size: %lu\n", sizeof(float*));
        printf("double size: %lu\n", sizeof(double*));
        return 0;
}
```

C언어의 기본 데이터 타입에 대해 알아 봅니다.

데이터 크기를 이해하면 굳이 데이터가 표현할 수 있는 범위를 외울 필요도 없습니다.

- 참조 : [https://www.tutorialspoint.com/cprogramming/c_data_types.htm](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)

| Type | Storage size | Value range |
| --- | --- | --- |
| char | 1 byte | -128 to 127 |
| unsigned char | 1 byte | 0 to 255 |
| short | 2 bytes | -32,768 to 32,767 |
| unsigned short | 2 bytes | 0 to 65,535 |
| int | 2 or 4 bytes | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 |
| unsigned int | 2 or 4 bytes | 0 to 65,535 or 0 to 4,294,967,295 |
| long | 8 bytes or (4bytes for 32 bit OS) | -9223372036854775808 to 9223372036854775807 |
| unsigned long | 8 bytes | 0 to 18446744073709551615 |
| POINTER(*) | 4 or 8 bytes | 32bits or 64bits |

| Type | Storage size | Value range | Precision |
| --- | --- | --- | --- |
| float | 4 byte | 1.2E-38 to 3.4E+38 | 6 decimal places |
| double | 8 byte | 2.3E-308 to 1.7E+308 | 15 decimal places |

여러분의 PC 또는 서버에서 실제 위와 같은 데이터를 출력하는지 확인할 수 있습니다.

```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX    :   %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}
```

---

**[02_scope.c]**

```c
#include <stdio.h>

int main() {
    int red = 0;
    printf("red0: %d\n", red);

    red = 1;
    printf("red1: %d\n", red);

    {
        int red = 2;
        printf("red2: %d\n", red);
    }

    printf("red?: %d\n", red);
    return 0;
}
```

변수 선언과 초기화, 변수에 값을 할당하는 방식을 알아 봅니다.

또한 지역 변수의 유효 범위(variable scope)에 대해 이해합니다.

---

**[03_variable.c]**

```c
#include <stdio.h>

int main() {
    int red;
    int orange;
    int yellow;
    int green;
    int blue;
    int indigo;
    int purple;

    printf("red:    %d\n", red);
    printf("orange: %d\n", orange);
    printf("yellow: %d\n", yellow);
    printf("green:  %d\n", green);
    printf("blue:   %d\n", blue);
    printf("indigo: %d\n", indigo);
    printf("purple: %d\n", purple);

    return 0;
}
```

여러개의 변수를 선언해보고 초기화 하지 않은 변수의 값은 어떻게 출력되는지 확인해 봅니다.

---

**[04_if.c]**

```c
#include <stdio.h>

int main() {
    int red = 1;
    int orange = 0;
    int yellow = 1;
    int green = 0;
    int blue = 1;
    int indigo = 0;
    int purple = 0;

    if (red > 0) {
        printf("red:    %d\n", red);
    }

    if (orange > 0) {
        printf("orange: %d\n", orange);
    }

    if (yellow > 0) {
        printf("yellow: %d\n", yellow);
    }

    if (green > 0) {
        printf("green:  %d\n", green);
    }

    if (blue > 0) {
        printf("blue:   %d\n", blue);
    }

    if (indigo > 0) {
        printf("indigo: %d\n", indigo);
    }

    if (purple > 0) {
        printf("purple: %d\n", purple);
    }

    return 0;
}
```

if 조건문에 대해 알아 봅니다.

조건문, 반복문등의 블록 라인이 한줄인 경우 중괄호를 사용하지 않아도 됩니다.

중괄호의 위치는 가독성을 헤치지 않는 범위내에서 어디든 위치해도 무관합니다.

```c
    if (red > 0) printf("red:    %d\n", red);

    if (orange > 0) 
        printf("orange: %d\n", orange);

    if (yellow > 0) 
    {
        printf("yellow: %d\n", yellow);
    }

    if (green > 0) 
    {   printf("green:  %d\n", green);
    }

    if (blue > 0) {   
        printf("blue:   %d\n", blue);
    }

    ...
```

---

**[05_if_colors.c]**

```c
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
    int red = 1;
    int orange = 0;
    int yellow = 1;
    int green = 0;
    int blue = 0;
    int indigo = 0;
    int purple = 1;

    if (red > 0) {
        printf("%sred:    %d%s\n", RED_ANSI, red, RESET_ANSI);
    }

    if (orange > 0) {
        printf("%sorange: %d%s\n", ORANGE_ANSI, orange, RESET_ANSI);
    }

    if (yellow > 0) {
        printf("%syellow: %d%s\n", YELLOW_ANSI, yellow, RESET_ANSI);
    }

    if (green > 0) {
        printf("%sgreen:  %d%s\n", GREEN_ANSI, green, RESET_ANSI);
    }

    if (blue > 0) {
        printf("%sblue:   %d%s\n", BLUE_ANSI, blue, RESET_ANSI);
    }

    if (indigo > 0) {
        printf("%sindigo: %d%s\n", INDIGO_ANSI, indigo, RESET_ANSI);
    }

    if (purple > 0) {
        printf("%spurple: %d%s\n", PURPLE_ANSI, purple, RESET_ANSI);
    }

    return 0;
}
```

ANSI Color를 활용하여 가독성에 약간의 도움을 줄 수 있는 무지개색 로그를 출력해봅니다.

컬러별 색상 정의를 위해 #define문을 활용하는 방법에 대해 살펴 봅니다.

아, 이 예제는 if 조건문과는 아무런 상관 관계가 없지만 이후 계속 사용 예정입니다.

---

**[06_if_elseif.c]**

```c
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
```

if, else if, else 조건문에 대해 알아 봅니다.

세가지 조건문의 조합은 첫번째 조건이 일치하는 문장만 실행됩니다.

---

**[07_array_.c]**

```c
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
```

동일한 데이터 타입으로 연속된 메모리 공간을 할당할 수 있는 array에 대해 알아 봅니다.

동일한 데이터, 그리고 연속된 공간이라는 표현는 연산이 가능하다는 의미입니다.

array의 표현식과 data overflow에 대해 살펴 봅니다.

---

**[08_for_.c]**

```c
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
```

for 반복문은 아래와 같은 형식으로 구성되어 있습니다.

```c
for (초기화; 조건문; 증감연산) { 

    ... 

}
```

초기화는 1회만 수행되고 해당 조건이 참이면 블럭 구문을 수행합니다.

블럭이 끝나거나 continue문을 만나면 증감연산을 수행하고 이 조건이 참이면

다시 블럭구문이 계속 반복되는 구조입니다. 

조건이 거짓이 되거나 break문을 만나면 for 반복문을 빠져나오게 됩니다.

초기화, 조건문, 증감연산은 세미콜론(;)으로 구분하고 내용이 없으면 비워둘 수 있습니다.

모든 조건식을 비워둔 for(;;) 반복문은 while(1) 문과 동일한 기능을 수행합니다.

```c
for (;;) { 

    ... 

}
```

또는

```c
while (1) {
    ...
}
```

---

**[09_array_for_.c]**

```c
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
    int rainbow[7] = {0,};

    rainbow[0] = 0; // red
    rainbow[1] = 0; // orange
    rainbow[2] = 1; // yellow
    rainbow[3] = 0; // green
    rainbow[4] = 0; // blue
    rainbow[5] = 1; // indigo
    rainbow[6] = 0; // purple

    for (int i = 0; i < 7; i++) {
        if (i == 0 && rainbow[0] > 0) {
            printf("%sred:    %d%s\n", RED_ANSI, rainbow[0], RESET_ANSI);
        } else if (i == 1 && rainbow[1] > 0) {
            printf("%sorange: %d%s\n", ORANGE_ANSI, rainbow[1], RESET_ANSI);
        } else if (i == 2 && rainbow[2] > 0) {
            printf("%syellow: %d%s\n", YELLOW_ANSI, rainbow[2], RESET_ANSI);
        } else if (i == 3 && rainbow[3] > 0) {
            printf("%sgreen:  %d%s\n", GREEN_ANSI, rainbow[3], RESET_ANSI);
        } else if (i == 4 && rainbow[4] > 0) {
            printf("%sblue:   %d%s\n", BLUE_ANSI, rainbow[4], RESET_ANSI);
        } else if (i == 5 && rainbow[5] > 0) {
            printf("%sindigo: %d%s\n", INDIGO_ANSI, rainbow[5], RESET_ANSI);
        } else if (i == 6 && rainbow[6] > 0) {
            printf("%spurple: %d%s\n", PURPLE_ANSI, rainbow[6], RESET_ANSI);
        } else {
            printf("Colorless!\n");
        }
    }

    return 0;
}
```

array 데이터 타입은 연산이 가능하기 때문에 for문을 이용해 반복적인 연산이 가능합니다.

for 반복문에 대해 살펴 봅니다.

---

**[10_define_.c]**

```c
#include <stdio.h>

// ANSI Color
#define RED_ANSI        "\033[0;31m"
#define ORANGE_ANSI     "\033[31m"
#define YELLOW_ANSI     "\033[0;33m"
#define GREEN_ANSI      "\033[0;32m"
#define BLUE_ANSI       "\033[0;34m"
#define INDIGO_ANSI     "\033[36m"
#define PURPLE_ANSI     "\033[0;35m"
#define RESET_ANSI      "\033[0m"

// Rainbow Color
#define RED_COLOR           0
#define ORANGE_COLOR        1
#define YELLOW_COLOR        2
#define GREEN_COLOR         3
#define BLUE_COLOR          4
#define INDIGO_COLOR        5
#define PURPLE_COLOR        6
#define MAX_COLOR_NUM       7

int main() {
    int rainbow[MAX_COLOR_NUM] = {0,};

    rainbow[RED_COLOR]      = 1;
    rainbow[GREEN_COLOR]    = 1;
    rainbow[INDIGO_COLOR]   = 1;

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
```

다시 rainbow 예제 코드로 돌아와서 define 구문에 대해 좀더 알아 봅니다.

이전에 정의한 ANSI Color는 문자열 타입으로 코드의 가독성에 도움을 주었습니다.

이번에 정의한 Rainbow Color는 정수 타입으로 코드 가독성 뿐만 아니라 안정성에도 도움을 줍니다.

define 구문은 컴파일 과정에서 정의된 코드로 치환이 이루어 집니다.

코드에 대한 설명을 남기거나 불필요한 구문에 대해 주석 처리를 할 수 있습니다.

```c
// 이것은 한줄 주석입니다.

/*
   이것은 여러줄 주석입니다.
   그렇습니다.
*/
```

---

**[11_switch_.c]**

```c
#include <stdio.h>

// ANSI Color
#define RED_ANSI        "\033[0;31m"
#define ORANGE_ANSI     "\033[31m"
#define YELLOW_ANSI     "\033[0;33m"
#define GREEN_ANSI      "\033[0;32m"
#define BLUE_ANSI       "\033[0;34m"
#define INDIGO_ANSI     "\033[36m"
#define PURPLE_ANSI     "\033[0;35m"
#define RESET_ANSI      "\033[0m"

// Rainbow Color
#define RED_COLOR           0
#define ORANGE_COLOR        1
#define YELLOW_COLOR        2
#define GREEN_COLOR         3
#define BLUE_COLOR          4
#define INDIGO_COLOR        5
#define PURPLE_COLOR        6
#define MAX_COLOR_NUM       7

int main() {
    int rainbow[MAX_COLOR_NUM] = {0,};

    rainbow[YELLOW_COLOR] = 1;
    rainbow[INDIGO_COLOR] = 1;

    for (int i = 0; i < MAX_COLOR_NUM; i++) {
        switch (i) {
            case RED_COLOR:
                if (rainbow[i] > 0)
                    printf("%sred:    %d%s\n", RED_ANSI, rainbow[i], RESET_ANSI);
                break;
            case ORANGE_COLOR:
                if (rainbow[i] > 0)
                    printf("%sorange: %d%s\n", ORANGE_ANSI, rainbow[i], RESET_ANSI);
                break;
            case YELLOW_COLOR:
                if (rainbow[i] > 0)
                    printf("%syellow: %d%s\n", YELLOW_ANSI, rainbow[i], RESET_ANSI);
                break;
            case GREEN_COLOR:
                if (rainbow[i] > 0)
                    printf("%sgreen:  %d%s\n", GREEN_ANSI, rainbow[i], RESET_ANSI);
                break;
            case BLUE_COLOR:
                if (rainbow[i] > 0)
                    printf("%sblue:   %d%s\n", BLUE_ANSI, rainbow[i], RESET_ANSI);
                break;
            case INDIGO_COLOR:
                if (rainbow[i] > 0)
                    printf("%sindigo: %d%s\n", INDIGO_ANSI, rainbow[i], RESET_ANSI);
                break;
            case PURPLE_COLOR:
                if (rainbow[i] > 0)
                    printf("%spurple: %d%s\n", PURPLE_ANSI, rainbow[i], RESET_ANSI);
                break;
            default:
                printf("Colorless!\n");
                break;
        }
    }

    return 0;
}
```

if ~ else if ~ else 조건문이 많은 경우 가독성이 떨어집니다.

switch 조건문은 완전하게 동일한 기능을 제공하면서도 가독성이 좋습니다.

switch 구문의 조건은 정수형이며 일치하는 case 구문만 실행이 되고 break 구문을 만나면 

siwtch 구문을 빠져나옵니다.  만약 모든 조건이 일치 하지 않으면 default 구문이 실행됩니다.

---

**[12_enum_.c]**

```c
#include <stdio.h>

// ANSI Color
#define RED_ANSI        "\033[0;31m"
#define ORANGE_ANSI     "\033[31m"
#define YELLOW_ANSI     "\033[0;33m"
#define GREEN_ANSI      "\033[0;32m"
#define BLUE_ANSI       "\033[0;34m"
#define INDIGO_ANSI     "\033[36m"
#define PURPLE_ANSI     "\033[0;35m"
#define RESET_ANSI      "\033[0m"

typedef enum {
    RED_COLOR,      // first zero
    ORANGE_COLOR,   // +1 ..
    YELLOW_COLOR,
    GREEN_COLOR,
    BLUE_COLOR,
    INDIGO_COLOR,
    PURPLE_COLOR,
    MAX_COLOR_NUM
} rainbow_color_t;

int main() {
    int rainbow[MAX_COLOR_NUM] = {0,};

    rainbow[YELLOW_COLOR] = 1;
    rainbow[INDIGO_COLOR] = 1;

    for (rainbow_color_t i = RED_COLOR; i < MAX_COLOR_NUM; i++) {
        switch (i) {
            case RED_COLOR:
                if (rainbow[i] > 0)
                    printf("%sred:    %d%s\n", RED_ANSI, rainbow[i], RESET_ANSI);
                break;
            case ORANGE_COLOR:
                if (rainbow[i] > 0)
                    printf("%sorange: %d%s\n", ORANGE_ANSI, rainbow[i], RESET_ANSI);
                break;
            case YELLOW_COLOR:
                if (rainbow[i] > 0)
                    printf("%syellow: %d%s\n", YELLOW_ANSI, rainbow[i], RESET_ANSI);
                break;
            case GREEN_COLOR:
                if (rainbow[i] > 0)
                    printf("%sgreen:  %d%s\n", GREEN_ANSI, rainbow[i], RESET_ANSI);
                break;
            case BLUE_COLOR:
                if (rainbow[i] > 0)
                    printf("%sblue:   %d%s\n", BLUE_ANSI, rainbow[i], RESET_ANSI);
                break;
            case INDIGO_COLOR:
                if (rainbow[i] > 0)
                    printf("%sindigo: %d%s\n", INDIGO_ANSI, rainbow[i], RESET_ANSI);
                break;
            case PURPLE_COLOR:
                if (rainbow[i] > 0)
                    printf("%spurple: %d%s\n", PURPLE_ANSI, rainbow[i], RESET_ANSI);
                break;
            default:
                printf("Colorless!\n");
                break;
        }
    }

    return 0;
}
```

enum 구문은 define 문을 좀 더 쉽게 선언할 수 있고 데이터 타입으로 정의할 수 있습니다.

데이터 타입으로 정의하는 경우 그 의미가 개발자에게 명확하게 전달됩니다.

enum 구문의 첫번째 데이터에 별도의 값을 할당하지 않으면 0으로 초기화 되고,

이후 데이터는 자동으로 1씩 증가합니다.

```c
enum {
    RED_COLOR,     // 0
    ORANGE_COLOR,  // 1
    YELLOW_COLOR,  // 2
    ...
}
```

```c
enum {
    RED_COLOR = 10, // 10
    ORANGE_COLOR,   // 11
    YELLOW_COLOR,   // 12
    ...
}
```

---

**[13_function_.c]**

```c
#include <stdio.h>

// ANSI Color
#define RED_ANSI        "\033[0;31m"
#define ORANGE_ANSI     "\033[31m"
#define YELLOW_ANSI     "\033[0;33m"
#define GREEN_ANSI      "\033[0;32m"
#define BLUE_ANSI       "\033[0;34m"
#define INDIGO_ANSI     "\033[36m"
#define PURPLE_ANSI     "\033[0;35m"
#define RESET_ANSI      "\033[0m"

// Rainbow Color
typedef enum {
    RED_COLOR,      // first zero
    ORANGE_COLOR,   // +1 ..
    YELLOW_COLOR,
    GREEN_COLOR,
    BLUE_COLOR,
    INDIGO_COLOR,
    PURPLE_COLOR,
    MAX_COLOR_NUM
} rainbow_color_t;

void print_rainbow(int rainbow[MAX_COLOR_NUM]);

int main() {
    int rainbow[MAX_COLOR_NUM] = {0,};

    rainbow[YELLOW_COLOR] = 1;
    rainbow[INDIGO_COLOR] = 1;
    print_rainbow(rainbow);

    rainbow[PURPLE_COLOR] = 1;
    print_rainbow(rainbow);
    return 0;
}

void print_rainbow(int rainbow[MAX_COLOR_NUM]) {
    for (rainbow_color_t i = RED_COLOR; i < MAX_COLOR_NUM; i++) {
        switch (i) {
            case RED_COLOR:
                if (rainbow[i] > 0)
                    printf("%sred:    %d%s\n", RED_ANSI, rainbow[i], RESET_ANSI);
                break;
            case ORANGE_COLOR:
                if (rainbow[i] > 0)
                    printf("%sorange: %d%s\n", ORANGE_ANSI, rainbow[i], RESET_ANSI);
                break;
            case YELLOW_COLOR:
                if (rainbow[i] > 0)
                    printf("%syellow: %d%s\n", YELLOW_ANSI, rainbow[i], RESET_ANSI);
                break;
            case GREEN_COLOR:
                if (rainbow[i] > 0)
                    printf("%sgreen:  %d%s\n", GREEN_ANSI, rainbow[i], RESET_ANSI);
                break;
            case BLUE_COLOR:
                if (rainbow[i] > 0)
                    printf("%sblue:   %d%s\n", BLUE_ANSI, rainbow[i], RESET_ANSI);
                break;
            case INDIGO_COLOR:
                if (rainbow[i] > 0)
                    printf("%sindigo: %d%s\n", INDIGO_ANSI, rainbow[i], RESET_ANSI);
                break;
            case PURPLE_COLOR:
                if (rainbow[i] > 0)
                    printf("%spurple: %d%s\n", PURPLE_ANSI, rainbow[i], RESET_ANSI);
                break;
            default:
                printf("Colorless!\n");
                break;
        }
    }
}
```

동일한 기능(로직)을 반복적으로 사용할 경우 함수를 이용하면 편리합니다.

함수의 선언(declaration)과 정의(definition)를 구분하고

함수에 데이터를 전달할 수 있는 인수에 대해 알아봅니다.

인수의 전달 방식에 따라 Call by Value, Call by Reference로 구분합니다.

---

**[14_callby_value_.c]**

```c
#include <stdio.h>

// immutable (read-only)
void print_color(int color) {
    printf("color: %d\n", color);
    //color = 1;
}

// mutable
void change_color(int color) {
    color = 1;
}

int main() {
    int red = 0;
    print_color(red);

    change_color(red);
    print_color(red);

    return 0;
}
```

인수 전달 방식중 Call by Value, 즉 값에 의한 전달에 대해 알아봅니다.

---

**[15_callby_reference_.c]**

```c
#include <stdio.h>

// immutable (read-only)
void print_color(const int color) {
    printf("color: %d\n", color);
    //color = 1;
}

// mutable
void change_color(int *color) {
    *color = 1;
}

int main() {
    int red = 0;
    print_color(red);

    change_color(&red);
    print_color(red);

    return 0;
}
```

인수 전달 방식중 Call by Reference, 즉 참조에 의한 전달에 대해 알아봅니다.

전달 된 인수의 값이 변하지 않는 다는것을 보장하기 위해 const를 사용합니다.

---

**[16_array_pointer_.c]**

```c
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

    printf("rainbow[0]: %d\n", rainbow[0]); // 1
    printf("rainbow[1]: %d\n", rainbow[1]); // 2
    printf("rainbow[2]: %d\n", rainbow[2]); // 10
    printf("rainbow[3]: %d\n", rainbow[3]);
    return 0;
}
```

변수와 포인터, 배열 포인터의 개념에 대해 알아봅니다. 

&(ampercent), *(asterisk)의 활용법에 대해 알아봅니다.

---

**[17_ascii_.c]**

```c
#include <stdio.h>

int main() {
    printf("a - A = %d\n", 'a' - 'A'); // 32
    return 0;
}
```

ASCII 코드의 개념에 대해 알아 봅니다.

---

**[18_struct.c]**

```c
#include <stdio.h>

typedef struct {
    char name[20];
    char phone[16];
    int age;
} customer_data_t;

void print_user(customer_data_t user) {
    printf("name:%s\n", user.name);
    printf("phone:%s\n", user.phone);
    printf("age:%d\n", user.age);
}

void change_user(customer_data_t *user) {
    //(*user).age = 20;
    user->age = 20;
}

int main() {
    customer_data_t user = {
        name: "jason",
        phone: "01011112222",
        age: 32,
    };

    print_user(user);

    change_user(&user);

    print_user(user);
    return 0;
}
```

개발자 정의 타입인 struct 구조체를 이해합니다.

구조체 초기화와 구조체 변수를 호출하는 방법에 대해 알아봅니다.

---

**[19_malloc.c]**

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int red;
    int orange;
    int yellow;
    int green;
    int blue;
    int indigo;
    int purple;
} color_t;

typedef struct {
    char *name;
    char phone[15];
    int age;
    int point;
    color_t favorite_color;
} customer_data_t;

int main() {
    /*
    customer_data_t user = {
        name: "jason",
        phone: "01011223344",
        age: 22,
        point: 30,
        favorite_color: {
            red: 0,
            yellow: 1,
        }
    };
    */

    char *name = "Red Wacky League Antlez Broke the Stereo Neon Tide Bring Back Honesty Coalition Feedback Hand of Aces Keep Going Captain Let`s Pretend Lost State of Dance Paper Taxis Lunar Road Up Down Strange All and I Neon Sheep Eve Hornby Faye Bradley AJ Wilde Michael Rice Dion Watts Matthew Appleyard John Ashurst Lauren Swales Zoe Angus Jaspreet Singh Emma Matthews Nicola Brown Leanne Pickering Victoria Davies Rachel Burnside Gil Parker Freya Watson Alisha Watts James Pearson Jacob Sotheran Darley Beth Lowery Jasmine Hewitt Chloe Gibson Molly Farquhar Lewis Murphy Abbie Coulson Nick Davies Harvey Parker Kyran Williamson Michael Anderson Bethany Murray Sophie Hamilton Amy Wilkins Emma Simpson Liam Wales Jacob Bartram Alex Hooks Rebecca Miller Caitlin Miller Sean McCloskey Dominic Parker Abbey Sharpe Elena Larkin Rebecca Simpson Nick Dixon Abbie Farrelly Liam Grieves Casey Smith Liam Downing Ben Wignall Elizabeth Hann Danielle Walker Lauren Glen James Johnson Ben Ervine Kate Burton James Hudson Daniel Mayes Matthew Kitching Josh Bennett Evolution Dreams";

    customer_data_t user;
    strcpy(user.phone, "01011223344");
    user.age = 10;
    user.point = 50;

    user.name = (char*)malloc(strlen(name)+1);
    memset(user.name, 0, strlen(name)+1);
    strcpy(user.name, name);

    printf("name:%s\n", user.name);
    printf("phone:%s\n", user.phone);
    printf("age:%d\n", user.age);
    printf("point:%d\n", user.point);
    printf("color: red(%d), yellow(%d)\n", user.favorite_color.red, user.favorite_color.yellow);

    free(user.name);
    // double free
    //free(user.name);
}
```

메모리의 스택 영역과 힙 영역에 대해 알아보고 malloc()이 필요한 이유를 이해합니다.

개발자에 의해 할당된 메모리는 memset() 함수로 초기화 합니다.

malloc()으로 할당된 메모리는 free() 함수로 반드시 자원을 해제하여야 합니다.

---

**[20_function_pointer.c]**

```c
#include <stdio.h>

void func_login(int id) {
    printf("login function: %d id\n", id);
}

void func_order(int id) {
    printf("order function: %d id\n", id);
}

void func_logout(int id) {
    printf("logout function: %d id\n", id);
}

void (*my_func[3])() = {
    func_login,
    func_order,
    func_logout
};

enum {
    LOGIN_STATS,
    ORDER_STATS,
    LOGOUT_STATS
};

int main() {
    /*
    int id = 123;

    void (*func)() = func_login;
    func(id);

    func = func_order;
    func(id);

    func = func_logout;
    func(id);
    */
    int id = 123;
    int stats = LOGIN_STATS;

    switch (stats) {
        case LOGIN_STATS:
            my_func[stats](id);
            break;
        case ORDER_STATS:
            my_func[stats](id);
            break;
        case LOGOUT_STATS:
            my_func[stats](id);
            break;
    }
}
```

함수 포인터의 개념에 대해 알아봅니다.

주로 상태 천이 기법에 많이 사용됩니다.

---

[유튜브 채널 : 시골사는 개발자]

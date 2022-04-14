#define RED_ANSI        "\033[0;31m"
#define ORANGE_ANSI     "\033[31m"
#define YELLOW_ANSI     "\033[0;33m"
#define GREEN_ANSI      "\033[0;32m"
#define BLUE_ANSI       "\033[0;34m"
#define INDIGO_ANSI     "\033[36m"
#define PURPLE_ANSI     "\033[0;35m"
#define RESET_ANSI      "\033[0m"

typedef enum {
	RED_COLOR,
	ORANGE_COLOR,
	YELLOW_COLOR,
	GREEN_COLOR,
	BLUE_COLOR,
	INDIGO_COLOR,
	PURPLE_COLOR,
	MAX_COLOR_NUM,
} rainbow_color_t;

void print_rainbow(int rainbow[MAX_COLOR_NUM]);

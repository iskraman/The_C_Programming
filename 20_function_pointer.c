/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>

void login_func() {
	printf("login_func()\n");
}

void order_func() {
	printf("order_func()\n");
}

void logout_func() {
	printf("logout_func()\n");
}

void (*func[3])() = {
	login_func,
	order_func,
	logout_func
};

enum {
	LOGIN_STATE,
	ORDER_STATE,
	LOGOUT_STATE
};

int main() {
	int state = 2;

	switch (state) {
		case LOGIN_STATE:
			func[LOGIN_STATE]();
			break;
		case ORDER_STATE:
			func[ORDER_STATE]();
			break;
		case LOGOUT_STATE:
			func[LOGOUT_STATE]();
			break;
	}

	return 0;
}

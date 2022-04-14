/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>
#include <string.h>

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

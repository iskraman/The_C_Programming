/*
 * author : 시골사는 개발자
 * youtube : https://www.youtube.com/channel/UCFah-uNCeggnIhxzBLC3TZA
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *name = "Red Wacky League Antlez Broke the Stereo Neon Tide Bring Back Honesty Coalition Feedback Hand of Aces Keep Going Captain Let`s Pretend Lost State of Dance Paper Taxis Lunar Road Up Down Strange All and I Neon Sheep Eve Hornby Faye Bradley AJ Wilde Michael Rice Dion Watts Matthew Appleyard John Ashurst Lauren Swales Zoe Angus Jaspreet Singh Emma Matthews Nicola Brown Leanne Pickering Victoria Davies Rachel Burnside Gil Parker Freya Watson Alisha Watts James Pearson Jacob Sotheran Darley Beth Lowery Jasmine Hewitt Chloe Gibson Molly Farquhar Lewis Murphy Abbie Coulson Nick Davies Harvey Parker Kyran Williamson Michael Anderson Bethany Murray Sophie Hamilton Amy Wilkins Emma Simpson Liam Wales Jacob Bartram Alex Hooks Rebecca Miller Caitlin Miller Sean McCloskey Dominic Parker Abbey Sharpe Elena Larkin Rebecca Simpson Nick Dixon Abbie Farrelly Liam Grieves Casey Smith Liam Downing Ben Wignall Elizabeth Hann Danielle Walker Lauren Glen James Johnson Ben Ervine Kate Burton James Hudson Daniel Mayes Matthew Kitching Josh Bennett Evolution Dreams";

typedef struct {
	char *name;
	char phone[16];
	int age;
} customer_data_t;

int main() {

	customer_data_t user;
	strcpy(user.phone, "01012345678");
	user.age = 30;

	user.name = malloc(strlen(name) + 1);
	strcpy(user.name, name);
	printf("%s\n", user.name);

	free(user.name);

	return 0;
}

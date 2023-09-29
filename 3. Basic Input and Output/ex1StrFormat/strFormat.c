#include <stdio.h>

int main(int argc, char *argv[]) {
	char playerName[50];
	int playerAge;

	printf("Hello, player.\nWould you be so kind as to provide me with your name(up to 49 characters counting spaces and symbols): ");
	scanf_s("%49s", playerName, sizeof(playerName));

	printf("Would you please also provide me your age: ");
	scanf_s("%d", &playerAge);

	/* Alright. So we limited player name to 49 characters. Now we need to
	 * display the data we just asked the user fo:
	 */
	printf("\nHero Profile:\n");
	printf("Your Name is: %s\n", playerName);
	printf("Your Age is: %d\n", playerAge);

	return 0;
}
#include <stdio.h>

int main(int argc, char* argv[]) {
	int playerLevel = 10;
	int playerHealth = 150;
	int playerGold = 1000;

	// Now we display the stats:
	printf("Character Level: %d\n", playerLevel);
	printf("Health Points: %d\n", playerHealth);
	printf("Gold Coins: %d\n", playerGold);

	return 0;
}
#include <stdio.h>

int main(int argc, char *argv[]) {
    int playerLevel;
    char playerName[50]; // Allow for player names up to 49 characters long
    float playerHealth;

    // Gather player data
    printf("Welcome, brave hero! Enter your name: ");
    scanf_s("%49s", playerName, sizeof(playerName));
    
    printf("Enter your level: ");
    scanf_s("%d", &playerLevel);
    
    printf("Enter your current health: ");
    scanf_s("%f", &playerHealth);

    // Display player information
    printf("\nHero Profile:\n");
    printf("Name: %s\n", playerName);
    printf("Level: %d\n", playerLevel);
    printf("Health: %.2f\n", playerHealth);

    return 0;
}

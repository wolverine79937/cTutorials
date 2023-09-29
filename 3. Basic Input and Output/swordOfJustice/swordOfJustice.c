#include <stdio.h>

int main(int argc, char* argv[]) {
	char itemName[] = "Sword of Justice"; // This is a different method of initializing a variable to hold a string.
	int itemQuantity = 3;
	int itemWeight = 5.2;

	// Now we're going to display the inventory:
	printf("Item: %s\n", itemName);
	printf("Quantity: %d\n", itemQuantity);
	printf("Weight: %.2f kg\n", itemWeight);

	return 0;
}
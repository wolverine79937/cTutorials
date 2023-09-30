#include <stdio.h>

int main(int argc, char* argv[]) {
	// So this is where we initialize our variables with data type integer.
	int length;
	int width;
	int perimeter;
	int area;

	// Here we explain what the program does briefly and then we request user input.
	printf("We're going to figure the perimeter and the area\nof a rectangle...");
	printf("Please input the length of your rectangle: ");
	scanf_s("%d", &length);

	printf("Please input the width of your rectangle: ");
	scanf_s("%d", &width);

	// This is to verify that the program is gathering data properly. Just a validation step.
	printf("Length is %d and the width is %d.\n", length, width);

	// Now we do our math real quick now that we have user input.
	area = width * length;
	perimeter = 2 * (length + width);
	
	// And we show what all that user input is used for by outputing area and perimeter.
	// I researched formulas real quick to make sure I got these right:
	// A = wl
	// P = 2(l+w)
	printf("So now, we are going to calculate the area\nof the rectangle with the numbers you just gave: %d\n", area);
	printf("Also, the perimeter of the rectangle with\nthe same numbers is: %d", perimeter);
	
	return 0;

}
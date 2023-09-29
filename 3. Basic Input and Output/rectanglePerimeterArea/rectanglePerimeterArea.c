#include <stdio.h>

int main(int argc, char* argv[]) {
	int length;
	int width;

	printf("We're going to figure the perimeter and the area\nof a rectangle...");
	printf("Please input the length of your rectangle: ");
	scanf_s("%d", &length);

	printf("Please input the width of your rectangle: ");
	scanf_s("%d", &width);

	printf("Length is %d and the width is %d.", length, width);

	return 0;
}
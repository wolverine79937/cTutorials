#include <stdio.h>

int globalVariable = 10; // A global variable

void modifyGlobalVariable() {
	globalVariable = 20;
}

int main(int argc, char* argv[]) {
	printf("Initial globalVariable value: %d\n", globalVariable);
	modifyGlobalVariable(); // This function modifies the global variable
	printf("Modified globalVariable value: %d\n", globalVariable);

	return 0;
}
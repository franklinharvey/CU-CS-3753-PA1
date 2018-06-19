#include <stdio.h>

int main() {
	int a = 4;
	int b = 5;
	int c;
	int success = syscall(399, a, b, &c);
	int success2 = syscall(398);
	if (success != 0)
		printf("Did not succeed, got return of %d\n", success);
	else
		printf("Added %d and %d and got %d\n", a, b, c);
	if (success2 == 0)
		printf("SUCCESS!");
	else
		printf("NO HELLO");
	return 0;
}

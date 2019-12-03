#include <stdio.h>

int main() {
	int a, b;

	scanf_s("%d", &a);
	char star = '*';
	for (int i = 0; i < a; i++) {
		for (b = 0; b <= i; b++) {

			printf("%c", star);
		}
		printf("\n");
	}
}
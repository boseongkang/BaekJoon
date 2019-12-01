#include <stdio.h>

int main() {

	int a, i;

	int min = 10000001;
	int max = -10000001;
	int c = 0;

	scanf_s("%d", &a);

	for (i = 0; i < a; i++) {
		scanf_s("%d", &c);
		if (c < min) {
			min = c;
		}
		if (c > max) {
			max = c;

		}
	}
	printf("%d %d", min, max);

}


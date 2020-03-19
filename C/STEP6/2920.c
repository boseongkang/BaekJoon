#include <stdio.h>

int main() {

	int array[8], asc = 0, des = 0, mix = 0;

	for (int i = 0; i < 8; i++) {
		scanf_s("%d", &array[i]);

		if (i + 1 == array[i]) {
			asc++;

		}
		else if (8 - i == array[i]) {
			des++;

		}
	}
	if (asc == 8) {
		printf("ascending");
	}
	else if (des == 8) {
		printf("descending");
	}
	else
		printf("mixed");
}


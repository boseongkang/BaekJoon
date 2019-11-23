#include <stdio.h>

int main() {
	int h, m;
	scanf_s("%d %d", &h, &m);

	if (m < 45) {
		if (h == 0) {
			h = 23;
		}
		else {
			h = h - 1;
		}
		printf("%d %d", h, 60 + m - 45);
	}
	else {
		printf("%d %d", h, m - 45);
	}
}
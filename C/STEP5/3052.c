#include <stdio.h>

int main() {

	int a[10], b[42] = { 0, }, result = 0, num = 0;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
		result = a[i] % 42;
		b[result]++;

	}
	for (int i = 0; i < 42; i++) {
		if (0 < b[i])
			num++;
	}
	printf("%d", num);


}
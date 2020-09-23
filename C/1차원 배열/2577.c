#include <stdio.h>
int main() {

	int array[10],a, b, c, result,count=1;
	scanf_s("%d %d %d", &a, &b, &c);
	result = a * b * c;

	for (int i = 0; i < 10; i++) {
		array[i] = 0;
	}
	for (int i = 0; result > 0; i++) {
		count = result % 10;
		array[count] += 1;
		result /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", array[i]); 
	}
}
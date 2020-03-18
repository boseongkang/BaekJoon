#include <stdio.h>

int main() {

	int a, b, c;
	int num, tmp;
	int result, cnt = 0;

	scanf_s("%d", &num);
	tmp = num;
	while (1) {
		a = tmp / 10;
		b = tmp % 10;
		c = (a + b) % 10;

		cnt++;

		result = (b * 10) + c;
		tmp = result;

		if (result == num)
			break;
	}
	printf("%d", cnt);

}
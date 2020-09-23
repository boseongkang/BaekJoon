#include <stdio.h>
int sum_num(int num) {

	int new_num = num;

	while (num > 0) {
		new_num += num % 10;
		num /= 10;
	}
	return new_num;

}
int main(void) {

	int arr[10001], cnt;
	for (int i = 1; i < 10001; i++) {
		cnt = sum_num(i);
		if (cnt < 10001)
			arr[cnt] = 1;

	}
	for (int i = 1; i < 10001; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}
	return 0;

}


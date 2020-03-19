#include <stdio.h>

int main() {

	int sub;
	double arr[1000], max = 0, result = 0;

	scanf_s("%d", &sub);

	for (int i = 0; i < sub; i++) {
		scanf_s("%lf", &arr[i]);
	}
	for (int i = 0; i < sub; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	for (int i = 0; i < sub; i++) {
		arr[i] = arr[i] / max * 100.0;
		result += arr[i];
	}
	printf("%0.2lf", (result/(double)sub));

}


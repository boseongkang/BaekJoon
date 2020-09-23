#include <stdio.h>

int main() {
	int n,result=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		result += i;
	}
	printf("%d",result);
}

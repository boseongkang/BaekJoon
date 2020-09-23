#include <stdio.h>

int main() {

	int a, b;
	int result = 0;

	while (1){
		scanf_s("%d %d", &a, &b);
		
		result = a + b;
		
		if (a == 0 && b == 0)
			break;

		printf("%d\n", result);
	}
	
}
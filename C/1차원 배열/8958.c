#include <stdio.h>

int main() {

	int quiz;
	char arr[82];

	scanf("%d", &quiz);
	for (int i = 0; i < quiz; i++)
	{
		scanf("%s", &arr);
		int result = 0;

		for (int j = 0, cnt = 0; j < arr[j]; j++)
		{
			/*int cnt = 0;*/
			if (arr[j] == 'O')
				cnt++;
			else
				cnt = 0;
			result += cnt;

		}
		printf("%d\n", result);

	}

}

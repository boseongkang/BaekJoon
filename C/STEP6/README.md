## 10818

10818번 풀때 
보기편하려고 `printf("수를 입력해 주세요 :\n");`
이렇게 코드 작성했다가 틀렸다고 나왔다. 
그리고 반드시 scanf_s 주의..

<hr>

## 8958

8958번 문제의 경우 상위버전 Visual Studio 에서는 scanf 안되서 scanf_s 를 사용해야했고 

```c
#include <stdio.h>

int main() {

	int quiz;
	char arr[82];

	scanf_s("%d", &quiz);
	for (int i = 0; i < quiz; i++)
	{
		scanf_s("%s", &arr, 82);
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

```

`scanf_s("%s", &arr, 82);` 이렇게 입력받을 변수 뒤에 버퍼의 길이도 전달해야 한다. 
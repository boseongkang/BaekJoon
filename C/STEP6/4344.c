#include <stdio.h>
#pragma warning (disable: 4996)

int main() {
	
	int C, student = 0;
	
	scanf("%d", &C);

	for (int i = 0; i < C; i++) {
		scanf("%d", &student);
		int arr[1002];
		int sum = 0;
		double avg = 0.0;
		
	
		for (int  j= 0; j < student; j++){
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		avg = (double)sum / student;
		
		int cnt = 0;

		for (int j = 0; j < student; j++) {
			if (avg < arr[j])
				cnt++;
		}
		printf("%0.3lf%%\n", (double)cnt * 100 / student);
	}
	

}
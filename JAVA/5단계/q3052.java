package step5;

import java.util.Arrays;
import java.util.Scanner;

public class q3052 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		// int A = sc.nextInt();
		// int B = sc.nextInt();
		// arr[i] = num % 42;
		// int result = A % 42;
		int cnt = 1;
		int arr[] = new int[10];

		for (int i = 0; i < arr.length; i++) {
			int A = sc.nextInt();
			arr[i] = A % 42;
		}
		Arrays.sort(arr);
		
		for (int i = 0; i < 9; i++) {
			if (arr[i] != arr[i + 1]) {
				cnt++;
			}
		}
		System.out.println(cnt);

	}

}

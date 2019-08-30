package step5;

import java.util.Scanner;

public class q2562 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int num[] = new int[9];
		for (int i = 0; i < num.length; i++) {
			num[i] = sc.nextInt();

		}
		int max = num[0];
		int cnt = 0;
		for (int i = 1; i < num.length; i++) {
			if (num[i] > max) {
				max = num[i];
				cnt = i + 1;
			}
		}
		System.out.println(max);
		System.out.println(cnt);
	}

}

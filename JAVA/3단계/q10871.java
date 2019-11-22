package step3;

import java.util.Scanner;

public class q10871 {
	static int n, x, a;

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int x = sc.nextInt();
		for (int i = 1; i <= n; i++) {
			a = sc.nextInt();
			if (a < x) {
				System.out.print(a + " ");
			}
		}

	}

}

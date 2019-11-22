package step5;

import java.util.Scanner;

public class q10818 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = Integer.parseInt(sc.nextLine());
		String[] number = sc.nextLine().split(" ");
		int[] nums = new int[N];
		for (int i = 0; i < number.length; i++) {
			nums[i] = Integer.parseInt(number[i]);
		}
		int max = nums[0];
		int min = nums[0];
		for (int i : nums) {
			if (max < i) {
				max = i;
			}
			if (min > i) {
				min = i;
			}
		}
		System.out.println(min + " " + max);
	}
}
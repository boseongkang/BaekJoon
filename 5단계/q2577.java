package step5;

import java.util.Scanner;

public class q2577 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		
		int result = A * B * C;  
		
		String alpha = Integer.toString(result);
		char chr [] = alpha.toCharArray();
		
		int arr [] = new int [10];
		
		for(int i=0; i<chr.length; i++) {
			arr[chr[i]-'0']++;
		}
		for(int num : arr) {
			System.out.println(num);
		}
		
		
	}

}

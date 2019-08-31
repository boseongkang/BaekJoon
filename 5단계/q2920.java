package step5;

import java.util.Scanner;

public class q2920 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int cmajor [] = new int [8];

		String sort = "1 2 3 4 5 6 7 8";
		String desc = "8 7 6 5 4 3 2 1";
		
		String index = sc.nextLine();
		
		if(index.equals(sort)) {
			System.out.println("ascending");
		}else if(index.equals(desc)){
			System.out.println("descending");
		}else {
			System.out.println("mixed");
		}
		
		
	}

}

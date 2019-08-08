package step2;
 
import java.util.Scanner;

public class q2884 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int h = sc.nextInt();
		int m = sc.nextInt();

		int hour = h;
		int minute = m - 45;
		if (minute < 0) {
			minute += 60;
			hour--;
			if (hour < 0) {
				hour += 24;
			}
		}
		System.out.println(hour + " " + minute);

	}

}

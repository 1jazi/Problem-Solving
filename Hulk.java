package round2;

import java.util.Scanner;

public class Hulk {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		if (n == 1) {
			System.out.println("I hate it\r\n"
					+ "");
		} else if (n == 2) {
			System.out.println("I hate that I love it\r\n"
					+ "");
		} else if (n == 3) {
			System.out.println("I hate that I love that I hate it\r\n"
					+ "");
		}
	}
}

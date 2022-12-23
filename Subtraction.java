package round2;

import java.util.Scanner;

public class Subtraction {
	public static void main(String[] args) {
		

		Scanner scanner = new Scanner(System.in);
		int newNumber = 0;
		int n = scanner.nextInt(), k = scanner.nextInt();
		// int x = scanner.nextInt();
		// System.out.println(x%10);
		int count = 0;

		for (int i = 0; i < k; i++) {

			if (lastDigit(n) != 0) {
				n -= 1;
				//System.out.println(n);
			
				/*if (lastDigit(n) == 0) {
					n = n / 10;
					//System.out.println(n);
				}*/
			}
			else if (lastDigit(n) == 0) {
				n = n / 10;
				//System.out.println(n);
			}
			

		}
		System.out.println(n);

	}

	public static int lastDigit(int n) {
		// return the last digit
		return (n % 10);
	}
}

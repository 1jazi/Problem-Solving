package round2;

import java.util.Scanner;

public class Pangram {
	public static void allLetter(String str) {
	
		str = str.toLowerCase();

		boolean allLetterPresent = true;

		for (char ch = 'a'; ch <= 'z'; ch++) {

			if (!str.contains(String.valueOf(ch))) {
				allLetterPresent = false;
				break;
			}
		}
		if (allLetterPresent) {
			System.out.println("YES");
		}
		else {
			System.out.println("NO");
		}
	}

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		String string = scanner.next();
	   allLetter(string);
 	}
}

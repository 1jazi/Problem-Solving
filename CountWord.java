package round2;

import java.util.Scanner;

public class CountWord {
	public static void main(String[] args) {
		String str;
		int upper = 0, lower = 0;
		Scanner scan = new Scanner(System.in);

		str = scan.nextLine();
		if(str.length()>=1&&str.length()<=100) {
		for (int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if (ch >= 'A' && ch <= 'Z') {
				upper++;
			} else if (ch >= 'a' && ch <= 'z') {
				lower++;
			}
		}
		if(upper==lower) {
			System.out.println(str.toLowerCase());
		}
		else if(upper>lower) {
			System.out.println(str.toUpperCase());
		}
		else {
			System.out.println(str.toLowerCase());
		}

	}
	}
}

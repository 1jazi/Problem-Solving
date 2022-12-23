package round2;

import java.util.Scanner;

public class Palindromic {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		String b = "";
		char r = 0;
		r = a.charAt(0);
		System.out.println(r);
		for (int i = 0; i < a.length(); i++) {
			//System.out.println(i);
			r = a.charAt(i);
			b = r + b;
		}
				recString("jazi");
		
	}
	private static void recString(String string) {
		if(string.length()<1)return;//base case
		String newString = null;
		newString += string; 
		System.out.println(newString);
		recString(string);
	}
}

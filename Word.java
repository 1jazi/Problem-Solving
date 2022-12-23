package round2;

import java.util.Scanner;

public class Word {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String word = scanner.next();
		boolean lower = false;
		boolean upper = false;
		int total=0;
		for (int i = 0; i < word.toLowerCase().length(); i++) {
        lower = word.contains(word.toLowerCase());
        upper = word.contains(word.toUpperCase());
        total++;
		}
		System.out.println(total);
		System.out.println(lower);
		System.out.println(upper);
		System.out.println(containsUpperCaseCharacter(word));
	}
	public static boolean containsUpperCaseCharacter(String string) {
		int totalUpper =0;
		  for (int i = 0; i < string.length(); i++) {
		    if (Character.isUpperCase(string.charAt(i))) {
		    	  totalUpper++;
		      return true;
		    
		    }
		  }
     
		  return false;
		}
	
}

package round2;

import java.util.Scanner;

public class Domino {
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt(), n = scanner.nextInt();
        int mul = n*m;
        
        System.out.println(mul/2);
	}
}

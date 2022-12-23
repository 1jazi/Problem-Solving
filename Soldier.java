package round2;

import java.util.Scanner;

public class Soldier {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int total =0;
		int k = scanner.nextInt(), n = scanner.nextInt(), w = scanner.nextInt();
		int storeK;
		System.out.println(Math.pow(10, 9));
		if(k>=1&&k<=1000&&w>=1&&w<=1000&&n>=0&&n<=Math.pow(10, 9)) {
		for (int i = 1; i <= w; i++) {
			
		    storeK = k*i;
			
			total+=storeK;
			
			//System.out.println(storeK);
	
		}
		if(total==n) {
			int x =0;
			System.out.println(x);
		}
		else {
			System.out.println(total-n);
		}
		//System.out.println(total);
		
	}
	}
}

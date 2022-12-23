package round2;

import java.util.Arrays;
import java.util.Scanner;

public class Shift {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int total=0;
		int size = scanner.nextInt();
		int[] a = new int[size];
		int[] b = new int[size];
		for (int i = 0; i < size; i++) {
			b[i] = scanner.nextInt();
			//b[i]=b[i-1];
		}
		for (int j = 1; j > 0; j--) {
			int temp = b[2];
			b[j] = b[j - 1];
			b[0]=temp;
			
				
				//a[i]=b[j-1];
				total++;
			
			
		}
		System.out.println(Arrays.toString(b));
		for(int i=0;i<size;i++) {
        	a[i] = b[i];
        	//total++;
        }
		System.out.println(total);
	}

}

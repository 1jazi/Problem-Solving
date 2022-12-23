package round2;

import java.util.Scanner;

public class EvenOdd {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int size=scanner.nextInt();
         int[] array = new int[size];
         int total=0;
         for(int i=0;i<size;i++) {
        	 array[i]=scanner.nextInt();
        	 if(array[i]%2==0) {
        		 total++;
        	 }
         }
         int x = 0;
         if(total!=array.length) {
         System.out.println(total);
         }
         else {
        	 System.out.println(x);
         }
         
	}
}

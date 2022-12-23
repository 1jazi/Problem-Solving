package round2;

import java.util.Scanner;

public class Elephant {
	public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      int x  = scanner.nextInt(), count =0;
    
      while(x!=0) {
    	  x -= 5;
    	 // System.out.println(x);
    	  count++;
    	  if(x<=0) {
    		  //count++;
    		  break;
    	  }
      }
      System.out.println(count);
	}
	
}

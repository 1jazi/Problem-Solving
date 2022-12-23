
import java.util.Scanner;

public class g {
 	public static void main(String[] args){
 	
 	
 	Scanner scanner = new Scanner(System.in);
    int num = scanner.nextInt();
 	String s;
 	for(int i =0;i<num;i++) {
 		s= scanner.next();
 		s=s.toLowerCase();
 		
 		if(s.equals("yes")) {
 			System.out.println("YES");
 		}
 		else {
 			System.out.println("NO");
 		}
 	}
 	
 	
 	}
}

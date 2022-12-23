
import java.util.Scanner;

public class Way {
	public static void main(String[] args) {
           Scanner scanner = new Scanner(System.in);
           int n = scanner.nextInt();
           String s;
           while(n!=0) {
            s = scanner.next();
            if(s.length()<=10) {
            	System.out.println(s);
            }else {
            System.out.println((s.charAt(0))+""+(s.length()-2)+""+s.charAt(s.length()-1)); 
            }   
            n--;
           }
 	}
}

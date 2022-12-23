
import java.util.Scanner;

public class Square {
  public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
	int testCase = scanner.nextInt();
	
	while(testCase!=0) {
		String s = scanner.next();
		int count = 0;
		int mid = s.length()/2;
		if(s.length()==1) {
			System.out.println("NO");
		}
		else if(s.length() %2==0) {
			for(int i =0;i<mid;i++) {
				if(s.charAt(i) == s.charAt(i+mid)) {
					count++;
				}
			}
		
		if(count==mid) {
			System.out.println("YES");
		}
		else {
			System.out.println("NO");
		}
		
		}
		else {
			System.out.println("NO");
		}
		testCase--;
	}
}
}

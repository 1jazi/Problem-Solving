
import java.util.Scanner;

public class Meeting {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int a= scanner.nextInt(), b = scanner.nextInt(), c = scanner.nextInt();
        int min = Math.min(a,Math.min(b,c));
        int max = Math.max(a,Math.max(b,c));
        int ans = max - min;
        System.out.println(ans);
	}
}

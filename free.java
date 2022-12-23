import java.util.Scanner;

public class free {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt(), x = scanner.nextInt(), d, count = 0;
		char s;
		for (int i = 0; i < n; i++) {
			s = scanner.next().charAt(0);
			d = scanner.nextInt();
			if (s == '+') {
				x += d;
			} else if (d <= x) {
				x -= d;
			} else {
				count++;
			}
		}
		System.out.println(x + " " + count);
	}
}

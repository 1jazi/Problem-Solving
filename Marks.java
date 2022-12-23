package round2;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Vector;

public class Marks {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int[][] array = new int[100][100];
		int[] rows = new int[100];
		int[] columns = new int[100];
		ArrayList<Integer> arrayList = new ArrayList<Integer>();

		Vector<Integer> vector = new Vector<>();

		int n = scanner.nextInt(), m = scanner.nextInt();
		for (int i = 0; i < m; i++) {

			for (int j = 0; i < n; i++) { // columns
				array[i][j] = scanner.nextInt();
				System.out.println(array[i][j]);
				vector.add(array[i][j]);

			}
		}
       for(int[] row: array ) {
    	   System.out.println(Arrays.toString(row));
       }
		/*System.out.println(vector.size());

		for (Integer v : vector) {
			System.out.println(v);
		}
		System.out.println("Max -> "+findMax(vector));*/

	}

	public static int findMax(int[][] array) {
		int maxNum = 0;
	//for(int[] row : )
		return maxNum;
	
	}
}

package round2;

import java.util.Scanner;

public class George {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numberOfRooms = scanner.nextInt();
		if(numberOfRooms>=1&&numberOfRooms<=100) {
		int p = 0, q = 0, countYes = 0,countNo=0;
		int[] arrayP = new int[numberOfRooms];
		int[] arrayQ = new int[numberOfRooms];
		
		for (int i = 0; i < numberOfRooms; i++) {
			p = scanner.nextInt();
			q = scanner.nextInt();
			arrayQ[i] = p;
			arrayP[i] = q;
			
			if(arrayP[i]==arrayQ[i]) {
				//System.out.println("Yes");
				countYes++;
			}
			else if(arrayP[i]!=arrayQ[i]) {
				//System.out.println("No");
				countNo++;
			}
			
		}
		if(p>=0&&p<=100&&q>=0&&q<=100&&p<=q) {
		for(int i =0 ; i<numberOfRooms;i++) {
			if(arrayP[i]==arrayQ[i]) {
				System.out.println(countNo);
				break;
			}
			else if(arrayP[i]!=arrayQ[i]) {
				System.out.println(countNo);
				break;
				

			}
		}
		}
	}
	}
}

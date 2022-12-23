package round2;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;

public class Taxi {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numOfGroups = scanner.nextInt();
		ArrayList<Integer>arrayList=new ArrayList<>();
		int[] array = new int[numOfGroups];
		int total = 0;
		int storeArray=0;
		for (int i = 0; i < numOfGroups; i++) {
			array[i] = scanner.nextInt();
			storeArray=array[i];
			// System.out.print(array[i]);
			total += array[i];
		}
		
		// total /= 4;
		int count = 0;
		//System.out.println(total);
		while (total != 0) {
			total = total - 4;
			count++;
			if (total == 3 || total == 2 || total == 1) {
				arrayList.add(total);
				if(arrayList.size()>=1) {
					count++;
				}
				break;
			}
		}
		System.out.println(count);
        
	}
	}


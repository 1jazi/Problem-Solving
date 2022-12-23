package round2;

import java.util.Arrays;
import java.util.Collections;

import java.util.Scanner;

public class puzzle {
	public static void main(String[] args) {
		 Scanner scanner = new Scanner(System.in);
	     int n = scanner.nextInt();
		 int rows = 4;
		 if(n>1&&n<2000000) {
         int[][] array = new int[rows][n];
         for(int i = 0; i<rows;i++) { //rows
      	   for(int j = 0; j<n;j++) { //columns
          	array[i][j]=scanner.nextInt();
             }
      	  
         }
         int[][] newArray1 = new int[2][n];
        // System.out.println("new Array1");
         for(int i = 0; i<2;i++) { 
	    	   for(int j = 0; j<n;j++) { 
	    		   newArray1[i][j]=array[i][j];
	    		  
	    		 
	           }
	    	  
	       }
         
         int[][] newArray2 = new int[4][n];
        // System.out.println("new Array2");
         for(int i = 2; i<4;i++) { 
	    	   for(int j = 0; j<n;j++) { 
	    		   newArray2[i][j]=array[i][j];
	           }
	    	  
	       }
        System.out.println(sortPuzzle(newArray1, newArray2, n)); 
      
	}}
	public static int sortPuzzle(int[][] array1,int[][] array2, int n) {
		
		int count =0;
		for(int i = 0; i<2;i++) { 
	    	   for(int j = 0; j<n;j++) { 
	    		 if(array1[i][j]!=array2[i][j]) {
	    			 
	    			count++;
	    		 }    		 
	           }
	    	  
	       }
		
		Collections.reverse(Arrays.asList(array1));
		
		for(int i = 0; i<2;i++) { 
	    	   for(int j = 0; j<n;j++) { 
	    		 if(array1[i][j]==array2[i][j]) {
	    			 
	    			 count++;
	    			 return -1;
	    		 }
	    		 else {
	    			 return count;
	    		 }
	           }
	    	  
	       }
		
		return count;
		
	}
	
}

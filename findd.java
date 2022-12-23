
class fFnd {

	public static void main(String[] args) {
	
		String word[]= new String[1000];
		
		int count = 0;
       for(int i =0 ; i<word.length;i++) {
    	   if(word[i].contains("HTU")) {
    		   count++;
    	   }
       }
	System.out.println(count);
	}
}

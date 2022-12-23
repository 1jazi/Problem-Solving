
public class test {
	public static void main(String[] args) {

		 int[] array = new int[50];
		 int total = 0;
		 for(int i = 0;i<array.length;i++) {
			  array[i] = i;
			  total+=array[i];
		 }
		 System.out.println(total);
	}
}

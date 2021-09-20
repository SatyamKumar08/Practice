package com.company;

public class Practice {

	static void pattern_recur(int n) {

		if (n > 0) {	//base case
			
			pattern_recur(n - 1);
//			* 
//			* * 
//			* * * 

			for (int i = 0; i < n; i++) { // iterating up-to n
				System.out.print("* ");
			}
			System.out.println("");
			
//			pattern_recur(n - 1);
//			* * * 
//			* * 
//			* 
		}

	}

	public static void main(String[] args) {
		int n1 = 3;
		pattern_recur(n1);
	}

}

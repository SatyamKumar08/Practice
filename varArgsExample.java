package com.company;

public class Practice {

	static int varArgs(int n, int... args) { // take at-least one argument
		int sum = n; // if only one argument passed then sum will be equal to n

		for (int a : args) { // for each loop used to print each element's sum
			sum += a;
		}
		return sum; // returning the sum
	}

	public static void main(String[] args) {
		int n1 = 7;
		int n2 = 8;
		int n3 = 9;
		int n4 = 10;
		int n5 = 11;
		int n6 = 12;
		int n7 = 13;

		int num = varArgs(n1, n2, n3, n4);
		System.out.println(num);
	}

}

import java.util.*;
import java.io.*;
import java.math.*;

class jhulka {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		for (int i = 0; i < 10; i++) {
			BigInteger tot = new BigInteger(sc.nextLine());
			BigInteger m = new BigInteger(sc.nextLine());

			BigInteger n = tot.subtract(m).divide(BigInteger.valueOf(2));
			BigInteger k = n.add(m);
			System.out.println(k);
			System.out.println(n);
		}
	}
}
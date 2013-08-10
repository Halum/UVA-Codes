
import java.math.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        // TODO code application logic here
    	Scanner scan = new Scanner(System.in);
    	int n, a;
    	BigInteger A, sum, I;

    	while( scan.hasNext() ){
    		n = scan.nextInt();
    		a = scan.nextInt();
    		A = new BigInteger("" + a);
    		sum = BigInteger.ZERO;

    		for(int i = 1; i<= n; ++i ){
    			I = new BigInteger("" + i);
    			sum = sum.add(A.pow(i).multiply(I));
    		}
    		System.out.println(sum);
    	}
   }
}

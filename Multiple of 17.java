
import java.math.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        // TODO code application logic here
    	Scanner scan = new Scanner(System.in);
    	BigInteger num, div;
    	div = new BigInteger("" + 17);

    	while( true ){
    		num = new BigInteger(scan.nextLine());

    		if(num.equals(BigInteger.ZERO)) break;

    		if( num.mod(div).equals(BigInteger.ZERO) ) System.out.println(1);
    		else System.out.println(0);
    	}
   }
}

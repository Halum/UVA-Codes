
import java.math.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        // 748
    	Scanner scan = new Scanner(System.in);
    	BigDecimal R;
    	String s;
    	int n;

    	while(scan.hasNext()){
    		R = new BigDecimal(""+scan.nextDouble());
    		n = scan.nextInt();

    		s =R.pow(n).stripTrailingZeros().toPlainString();
    		int i;
    		for( i=0; ; ++i)
    			if(s.charAt(i) != '0')
    				break;

    		System.out.println(s.substring(i));
    	}

   }
}

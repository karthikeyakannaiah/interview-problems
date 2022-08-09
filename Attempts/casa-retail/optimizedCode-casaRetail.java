import java.util.Arrays;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan = new Scanner(System.in);
	    double d = scan.nextDouble();
	    int n = scan.nextInt();
	    double max = 0; // speed max, position n speed of every car
	    for (int i=0; i<n; i++){
	        double position = scan.nextDouble();
	        double speed = scan.nextDouble();
	        max = max < ((d-position)/speed) ? ((d-position)/speed) : max;
	    }
	    System.out.println(String.format("%.6f", d/max));
	}
}



//optimized code
// in previous version, I wrote the code in 39 lines
// After realisation, I pushed to do a optimised version of it
 

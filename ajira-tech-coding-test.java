// this is my first online coding test for a placement 
// given time is 1 hour
// use of internet accepted
// plagiarism not allowed
// passed 5 testcases and failed 5

import java.util.Arrays;
import java.util.Scanner;

class code {
    static double maxTimedCar(double[] a){
        // car which took largest time to reach
        double m = a[0];
        for (int i = 1; i < a.length; i++){
            if (a[i] > m){
                m = a[i];
            }
        } 
        return m;
    }
    
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int d = scan.nextInt();
        int n = scan.nextInt();
        int cars[][]= new int[n][2];
        // take coordinate and speeds of each car
        for (int i=0; i < n ;i++){
            for ( int j=0; j<2; j++){
             cars[i][j]=scan.nextInt();   
            }
        }
        // find max speeds of each car between sharmi and D
        double carspeeds[]=new double[n];
        for (int i=0; i < n ;i++){
            carspeeds[i]=(d-cars[i][0])/cars[i][1];
        }
        // to find which car max time to reach
        double max = maxTimedCar(carspeeds);
        // sharmi can travel in this max speed so that not collide and reach destuination
        double ans = d/max;
        System.out.println(String.format("%.6f", ans));
    }

}

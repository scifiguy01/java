import java.util.*;
import java.io.*;


/* Input information: The first line contains an integer, , denoting the number of queries. 
Each line  of the  subsequent lines contains three space-separated integers describing the
respective a,b and n values for that query.
Output information: For each query, print the corresponding series on a new line. Each 
series must be printed in order as a single line of  space-separated integers.
Source: https://www.hackerrank.com/challenges/java-loops/problem */
class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        int curr = 0;
        int count = 1;
        for(int i=0;i<t; i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            curr = b+a;
            System.out.print(curr + " ");
            for(int j = 1; j<n; j++)
            {
                curr = curr + (int)Math.pow(2,j)*b;
                System.out.print(curr + " ");
            }
            System.out.print('\n');

        }
        in.close();
    }
}
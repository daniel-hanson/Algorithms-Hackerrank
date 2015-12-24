import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        BigInteger sum = new BigInteger("0");
        for(int arr_i=0; arr_i < n; arr_i++){            
            String s = Integer.toString(arr[arr_i]);
            BigInteger adder = new BigInteger(s);
            sum = sum.add(adder);
        }
        
        System.out.println(sum);
    }
}
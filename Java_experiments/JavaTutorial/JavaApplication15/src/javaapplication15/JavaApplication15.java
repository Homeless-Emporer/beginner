/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication15;
import java.util.*;

/**
 *
 * @author frakpop
 */
public class JavaApplication15 {

    public static void main(String[] args) {
        
         Scanner console = new Scanner(System.in);

        
        System.out.print("Enter array size: ");
        int size = console.nextInt();
        
        System.out.print("Enter array: ");



        int numbers[][] = new int[2][size];
        for (int i = 0; i < numbers.length; ++ i){
            numbers[i][i] = console.nextInt();
        }
        System.out.println(Arrays.deepToString(numbers));
        for ( int ii = 0; ii < 2; ++ii)
        {
        Arrays.sort(numbers[ii]);
        }
        System.out.println("Sorted array: \n" + Arrays.deepToString(numbers));

    }
    
}

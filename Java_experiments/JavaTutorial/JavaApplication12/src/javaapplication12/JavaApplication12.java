/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication12;

/**
 *
 * @author frakpop
 */
import java.util.Arrays;
public class JavaApplication12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int arr[] = {1, 2, 3, 5,2,4,9,5,6,8,3,12,4,22,13,11,8};
        int key = 33;
        System.out.println("The original array is: ");
        System.out.println(Arrays.toString(arr));
        bubbleSort(arr);
        System.out.println("The sorted array is: ");
        System.out.println(Arrays.toString(arr));
        for ()
        int result = binarySearch(arr, key, 0,16);
        if (result == -1)
        {
            System.out.println("The element is not in the array! ");
        } else {
        System.out.printf("The element %d is in location %d\n", key, result + 1);
        }
    }
    
    public static void bubbleSort(int arr[])
    {
        int length = arr.length;
        for (int passes = 0; passes <= length - 1; ++passes)
        {
            for (int i = 0; i <= length - 2; ++i)
                if (arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i +1];
                    arr[i + 1] = temp;
                }
        }
    }
    
    public static int binarySearch(int arr[], int key, int low, int high)
    {
        if (low <= high)
        {
            int mid = low + (high - low)/2;
            if (key == arr[mid])
                return mid;
            if (key > arr[mid])
            {
                return binarySearch(arr, key, mid + 1, high);
            }
            return binarySearch(arr, key, low, mid -1);
        }
        return -1;
    }
   
}

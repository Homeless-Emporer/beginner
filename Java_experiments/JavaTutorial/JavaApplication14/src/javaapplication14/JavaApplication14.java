/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication14;

/**
 *
 * @author frakpop
 */

import java.util.Scanner;

public class JavaApplication14 {
    public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    String message = "Hello World!";
//    System.out.println(message.toLowerCase().endsWith("world!"));
    
    boolean var = message.startsWith("Hello");
    if (var)
    {
        System.out.println("true");
    }

    System.out.println("Enter a string: ");
    String userInput = input.nextLine();
//    System.out.println("Hello: " + userInput.trim());
//    System.out.println(userInput.substring(3,9));
//    System.out.println(userInput.lastIndexOf("sa"));
    System.out.println(String.join(", ", message, userInput));
    
    
    
    }
    
}

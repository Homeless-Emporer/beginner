/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication16;

/**
 * This program generates the name game song based on names input by the user
 * Program 4
 * @author: Fracas Kapesa
 * @date:   10/28/2024
 */
import java.util.Scanner;
public class JavaApplication16 {
    public static void main(String[] args) {
   	 
    	Scanner console = new Scanner(System.in);
    	System.out.print("Enter your name: ");
    
    	String name = console.next();
	/*
	This loop will continue until a user enters in "quit" (not case sensitive) instead of a name, else it will continue the game
	*/
    	while(true){
            
        	/*
        	conditional statement for decisiding which version of the game to execute(Vowel or Consonant as the first letter)
        	*/
        	if(isVowel(name)){
                    System.out.printf("\n%s, %s, bo-b%s\nBanana-fana fo-f%s\nFee-fi-mo-m%s\n%s!\n", name, name, name.toLowerCase(), name.toLowerCase(), name.toLowerCase(), name);
        	} else {
                    System.out.printf("\n%s, %s, bo-b%s\nBanana-fana fo-f%s\nFee-fi-mo-m%s\n%s!\n", name ,name, name.substring(1), name.substring(1), name.substring(1), name);
        	}
                
        	System.out.print("\nPlay again? Enter name or enter quit to end: ");
        	name = console.next();
       	 
        	if(name.equalsIgnoreCase("quit")){
            	System.out.println("\nThanks for singing the name game! BYE!");
            	break;
        	}
    	}
    
    }
    
	/*
	This method takes in a string variable and returns a boolean value of true if the first
	letter is a vowel, else it returns a false if it isn't vowel.
	*/
	public static boolean isVowel(String name){
    	char firstLetter = name.toLowerCase().charAt(0);
    	switch(firstLetter){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
            	return false;
        }
    }
}

 

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication17;
import java.io.*;
import java.util.Scanner;
public class JavaApplication17 {

    public static void main(String[] args)
            throws FileNotFoundException{
        Scanner console = new Scanner(System.in);
        File outFile =  new File("/home/frakpop/out.txt");
        PrintStream fileOutput = new PrintStream(outFile);
        System.out.print("Enter file name: ");
        File inFile = new File(console.nextLine());
        while(!(inFile.canRead())){
            System.out.println("Can't read file, Try Again!");
            System.out.print("Enter file name: ");
            inFile = new File(console.nextLine());
        }
        Scanner input = new Scanner(inFile);
        while(input.hasNextLine()){
            String line = input.nextLine();
            processLine(line, fileOutput);
            processLine(line, System.out);

        }
    }
    
    public static void processLine(String line, PrintStream fileOutput)
        throws FileNotFoundException{
        Scanner text = new Scanner(line);
        double sum = 0;
        String fullName;
        int ID = text.nextInt();
        
            String firstName = text.next();
            if(!(text.hasNextInt() || text.hasNextDouble())){
                String lastName = text.next();
                fullName = firstName +' '+ lastName;
            } else {
                fullName = firstName+"\t";
            } 
            while(text.hasNextDouble()){
            double hour = text.nextDouble();
            sum += hour;
            }
        fileOutput.printf("Employee ID: #%s\t Employee name: %s\tTotal hours worked: %.2f\n", ID, fullName, sum);
        //System.out.printf("Employee ID: #%s\t Employee name: %s\tTotal hours worked: %.2f\n", ID, fullName, sum);

    }
}
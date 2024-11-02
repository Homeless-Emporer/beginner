/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package zipcode;

/**
 *@Program: Zipcode finder, finds the nearest locations based on zipcodes
 * @author Homeless Emporer
 * @date 11-1-2024
 */
import java.util.Scanner;
import java.io.*;

public class Zipcode {
    public static void main(String[] args) throws FileNotFoundException {
     
        printIntro();
        String targetLocation = userInput();
        int zipcode = 0;
        double proximity = 0.0;
        Scanner text = new Scanner(targetLocation);
        if(text.hasNextInt()){
             zipcode =  text.nextInt();
        }
        if(text.hasNextDouble()){
             proximity = text.nextDouble();
        }
        
        File zipcodeFile = new File("/home/frakpop/prjcts_vscode/Java_experiments/zipcode.txt");
        Scanner fileInput = new Scanner(zipcodeFile);
        String methodResult = findCoordinates(zipcode, fileInput);
        //System.out.println(methodResult);
        
        Scanner locationString = new Scanner(methodResult);
        int userZipcode = locationString.nextInt();
        String userCity = locationString.nextLine();
        double userLat = locationString.nextDouble();
        double userLong = locationString.nextDouble();
        System.out.printf("Your info: \n\tZipcode: %d\n\tCity:%s\n\tLatitude: %.3f\n\tLongitude: %.3f\n", userZipcode, userCity, userLat, userLong);
        
        fileInput = new Scanner(zipcodeFile);
        
        showMatches(fileInput, proximity, userLat, userLong);
        
        
    }
 
    public static void printIntro(){
        System.out.println("Welcome to The ZIPCODE Finder!");
        System.out.println("This program helps you find desired zipcodes within a specified proximity. ");
    }
    
    public static String userInput(){
        Scanner console = new Scanner(System.in);
        System.out.print("Enter the target zipcode: ");
        String zipcode = console.next();
        System.out.print("Enter the desired proximity (miles): ");
        String proximity = console.next();
        
        String targetLocation  = zipcode + ' ' + proximity;
        
        return targetLocation;
    }
    
    public static String findCoordinates(int zipcode, Scanner fileInput ){
        while(fileInput.hasNextLine()){
            if(fileInput.hasNextInt()){
            int temp = fileInput.nextInt();
            fileInput.nextLine();
                if(temp == zipcode){
                    String city = fileInput.nextLine();
                    String coordinates = fileInput.nextLine();
                    String userArea = temp + " " + city + "\n" + coordinates;
                return userArea;
                }
            } else {
                fileInput.next();
            }
        }
        
        return "Zipcode not Found";
    }
    
    public static double findDistance(double userLat, double userLong, double latitude, double longitude){
        
        double latDiff = (userLat-latitude)*(userLat-latitude);
        double longDiff = (userLong-longitude)*(userLong-longitude);
        double deltaLat = Math.toRadians(Math.sqrt(latDiff));
        double deltaLong = Math.toRadians(Math.sqrt(longDiff));
        
        double radLat1 = Math.toRadians(userLat);
        double radLat2 = Math.toRadians(latitude);
        
        double cosDiff = Math.cos(radLat2) * Math.cos(radLat1);
        
        double latSin = Math.pow(Math.sin(latDiff)/2,2);
        double longSin = Math.pow(Math.sin(longDiff)/2, 2);
        
        double sqrt = Math.sqrt(latSin + cosDiff*longSin);
        double arcsin = Math.asin(sqrt);
        double radius = 3959.0;
        
        return 2*radius*arcsin;
    }
    
    public static void showMatches(Scanner fileInput, double proximity, double userLat, double userLong){
        int matches = 0;
        while (fileInput.hasNextLine()){
            String zipcode =  fileInput.nextLine();
            String city = fileInput.nextLine();
            double latitude = fileInput.nextDouble();
            double longitude = fileInput.nextDouble();
            fileInput.nextLine();
            fileInput.nextLine();
            double distance = findDistance(userLat, userLong, latitude, longitude);
            if(distance <= proximity){
                System.out.printf("Near by match:\n\tZipcode: %s\n\tCity: %s\n\tCoordinates: (%.3f,%.3f)\n", zipcode, city, latitude, longitude);
                ++matches;
            }
            
        }
        if(matches == 0){
            System.out.println("Zero matches found");
        }
         System.out.println("We made it");

    }
}

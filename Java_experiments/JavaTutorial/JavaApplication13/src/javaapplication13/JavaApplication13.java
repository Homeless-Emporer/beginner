/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication13;

/**
 *
 * @author frakpop
 */

import java.awt.*;
import java.util.Scanner;
public class JavaApplication13 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);

        int x1;
        int y1;

        int x2;
        int y2;

        System.out.println("Enter you vector's initial x and y coordinates: ");
        x1 = input.nextInt();
        y1 = input.nextInt();

        System.out.println("Enter your vectors terminal x and y coordinates");
        x2 = input.nextInt();
        y2 = input.nextInt();
        Point point1 = new Point(x1, y1);
        Point point2 = new Point(x2, y2);
        
        System.out.printf("The initital point is: (%d, %d)\n", point1.x,  point1.y);
        System.out.printf("The terminal point is: (%d, %d)\n", point2.x, point2.y);
        Point point3 = standardPosition(point1, point2);
        System.out.printf("The standard position is: (%d, %d)\n", point3.x, point3.y);

    }
    
    public static Point standardPosition(Point point1, Point point2)
    {
        Point point3 = new Point(0,0);
        point3.x = point2.x - point1.x;
        point3.y =  point2.y - point1.y;
        
        return new Point(point2.x-point1.x, point2.y-point1.y);
    }
    
}

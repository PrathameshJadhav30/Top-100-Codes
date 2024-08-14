import java.util.Scanner;

public class Positive_And_Negative_Number {
    public static void main(String[] args) {
        //Brute force
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter a Number: ");
         int num = sc .nextInt();

         //Conditiion to check if the number is positive or negative
         if (num > 0)
             System.out.println("The number is Positive");
        else if (num < 0)
             System.out.println("The number is Negative");
        else
             System.out.println("zero");

    sc.close();

        
    }
    
}
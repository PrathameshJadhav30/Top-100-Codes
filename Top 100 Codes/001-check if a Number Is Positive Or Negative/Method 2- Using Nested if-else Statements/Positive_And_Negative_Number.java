import java.util.Scanner;
public class Positive_And_Negative_Number {
    public static void main(String[] args) {
        //using Nested If-else Statement
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number: ");
        int num = sc.nextInt();

        //Condition to check if the number is positive or negative
        if(num >=0)
        {
            if(num == 0)
                System.out.println("Zero");
            else 
                System.out.println("The number is positive");

        }
        else
            System.out.println("The number is Negative");

        sc.close();
        
    }
    
}

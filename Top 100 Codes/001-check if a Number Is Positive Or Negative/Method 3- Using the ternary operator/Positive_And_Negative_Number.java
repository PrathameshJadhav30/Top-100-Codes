import java.util.Scanner;

public class Positive_And_Negative_Number {
    public static void main(String[] args) {
        //using Ternary Operator
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number: ");
        int num =sc.nextInt();

        //Condition to check if the number is negative or positive

        if (num ==0)
        {
            System.out.println("Zero");
        }
        else{
            String result = num > 0 ?"The number is Positive":"The number is negative";
            System.out.println(result);
        }
        sc.close();
    }
    
}

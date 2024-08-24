import java.util.Scanner;

public class Natural_Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number: ");
        int n = sc.nextInt();

        System.out.println(n*(n+1)/2);

        sc.close();
    }
    
}

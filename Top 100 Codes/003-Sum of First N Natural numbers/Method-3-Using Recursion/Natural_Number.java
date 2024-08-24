import java.util.Scanner;

public class Natural_Number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number:");
        int n = sc.nextInt();

        int sum = getsum(n);

           System.out.println(sum);
        
           sc.close();
        
    }

    static int getsum(int n)
    {
        if( n == 0)
          return 0;

        return n + getsum(n -1);
    }
    
}

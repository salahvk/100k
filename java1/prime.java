import java.util.Scanner;

public class prime{
    public static void main(String ar[]){
        System.out.println("Enter a number");
        Scanner s = new Scanner(System.in);
        int a=s.nextInt();

        if(a%2 == 0 && a != 2){
            System.out.println("The number is not a prime number");
        }else{
            System.out.println("The number is  prime number");
        }
    }
}
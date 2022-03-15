import java.util.Scanner;

public class tax{
    public static void main(String ar[]){
         System.out.println("Enter Your Annual income");
         Scanner s = new Scanner(System.in); 
         float amount =s.nextFloat();
          
         if(amount <= 250000){
           System.out.println("No tax");
         }else if(amount > 250000 && amount <= 500000){
           System.out.println("Tax is "+ amount*5/100);
         }else if(amount > 500000 && amount <= 1000000){ 
           System.out.println("Tax is "+ amount*20/100);
         }else if(amount > 1000000 && amount <= 5000000){
           System.out.println("Tax is "+ amount*20/100);
         }else{
             System.out.println("Your too rich");
         }
    }}
import java.util.Scanner;

public class Array1{
    public static void main(String ar[]){
        System.out.println("Enter the size of array");
        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        System.out.println("Enter the Values of array1");
        int[] myArray=new int[100];
        for(int i=0;i<size; i++){
            myArray[i]=sc.nextInt();
        }
        System.out.println("Enter the Values of array2");
         for(int j=0;j<size; j++){
            myArray[j]=sc.nextInt();
        }
        // int product;
        System.out.print("Your product is ");   
        for(int i=0;i<size; i++){
           for(int j=i; j<=i; j++){
              int product=myArray[i]*myArray[j];
              System.out.print(myArray[i]);
              System.out.print(myArray[j]);
           }
           
            }
        
    }
}
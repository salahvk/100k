import java.util.Scanner;

public class dArray{
    public static void main(String ar[]){
        System.out.println("Enter the size of array");
        Scanner s = new Scanner(System.in);
        int a=s.nextInt();
        System.out.println("Enter the values of array 1");
        int[][] array=new int[10][10];
        for(int i=0; i<a; i++){
            for(int j = 0; j < a; j++){
            array[i][j]=s.nextInt();
            }
            }
        System.out.println("Enter the values of array 2");
        for(int i=0; i<a; i++){
            for(int j = 0; j < a; j++){
            array[i][j]=s.nextInt();
            }
            }


        System.out.print("Sum of array 1 and 2 \n");
         for(int i=0; i<a; i++){
            for(int j = 0; j < a; j++){
                int product = array[i][j] + array[i][j];
                  System.out.print(product + "  ")   ;
           
            }
            System.out.println();
        }

        

    
}}
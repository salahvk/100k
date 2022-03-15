import java.util.Scanner;

public class Array2{
    public static void main(String ar[]){
        int sum=0;
        Scanner s=new Scanner(System.in);
        System.out.print("Enter number of arrays");
        int n=s.nextInt();
        System.out.print("Enter value of arrays");
        
        int[] myArray=new int[100];
        // flag=0;

        for(int i=0; i<n; i++){ 
         myArray[i]=s.nextInt();}

        for(int i=0; i<n; i++){
        //    myArray[i]=s.nextInt();
           if(myArray[i]%3==0){
               System.out.println("*");
           }
          
        }
        // if flag=1(
            // System.out.println("*");
        
        // for(int j=0; j<n;j++){
        //     my
        // }

            // System.out.print(sum);
        
    }}
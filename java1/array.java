import java.util.Scanner;

public class array{
    public static void main(String ar[]){
        System.out.println("Enter the array limit");
        Scanner s = new Scanner(System.in);
        int a =s.nextInt();
        int[] array =   new int[10];
        System.out.println("Enter the values of Array");
        for(int i = 1; i <= a; i++){
            array[i]=s.nextInt();
            
            
        }

          for(int i = 1; i <= a; i++){
              int product =array[i]*array[i+1];
          System.out.print(product+" ");
          }

        


        
     
      
        
    }
}
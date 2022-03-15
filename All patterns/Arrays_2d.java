import java.util.Scanner;

public class Arrays_2d {

    Scanner sc = new Scanner(System.in);

    int limit=0;

    int[][] myarray=new int[100][100];
     
   

   void getArray(){

    System.out.println("Enter the size of an array");
     int limit=sc.nextInt();
      
     System.out.println("Enter the array values");
        

      for(int i=0; i< limit ;i++ ){
            for(int j=0; j < limit; j++){
                myarray[i][j]=sc.nextInt();
            }
        }
    }

    void displayArray(){
        

      for(int i=0; i<limit;i++ ){
            for(int j=0; j<limit; j++){
                System.out.print("Array values are "+myarray[i][j]);
            }
      }
    }
}
 
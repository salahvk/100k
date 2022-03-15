public class Pattern2{
    public static void main(String ar[]){
       for(int i=0;i<5;i++){
           for(int j=0;j<=i;j++){
             System.out.print(" ");
           }
           for(int k=i;k<=i;k++){
              System.out.print("*");
           }
           for(int l=i;l<=3;l++){
              System.out.print(" ");
           }
           for(int l=i;l<=3;l++){
              System.out.print(" ");
           }
           for(int m=i;m<=i&& i != 4;m++){
              System.out.print("*");
           }

           System.out.println();
         
       }
    }
}
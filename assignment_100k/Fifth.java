import java.util.Scanner;

public class Fifth {
    public static void main(String[] args) {
        int temp=0;
        System.out.println("Enter a name");
        Scanner sc =new Scanner(System.in);
        
        String str=sc.nextLine();
        int len =str.length();
        String arr[]=new String[len*(len+1)/2];

        for(int i=0;i< len;i++){
            for (int j=i; j< len;j++){
              arr[temp]=str.substring(i,j+1);
              temp++;
            }
        }
       
        System.out.println("Subset of entered string are ");
        for(int i=0;i<arr.length;i++){
          System.out.println(arr[i]);
        }


    }
}

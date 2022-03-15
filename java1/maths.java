import java.util.Scanner;
public class maths{
    public static void main(String ar[]){
        System.out.println("1 for Addition \n2 for Substraction \n3 for Multiplication \n4 for Division");
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();

        if(a==1){
            System.out.println("Enter two numbers");
            int n1 =s.nextInt();
            int n2 =s.nextInt();
            int sum =n1+n2;
            System.out.println("Sum is "+sum);
        }else if(a==2){
            System.out.println("Enter two numbers");
            int s1 =s.nextInt();
            int s2 =s.nextInt();
            int sub =s1-s2;
            System.out.println("Subtracted value is "+sub);
        }else if(a==3){
            System.out.println("Enter two numbers");
            int m1 =s.nextInt();
            int m2 =s.nextInt();
            int mul =m1*m2;
            System.out.println("Multiplied value is "+mul);
        }else if(a==4){
            System.out.println("Enter two numbers");
            int d1 =s.nextInt();
            int d2 =s.nextInt();
            int div =d1/d2;
            System.out.println("Divided value is "+div);
        }else{
            System.out.println("Input error!");
        }       
        
    }
}
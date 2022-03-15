import java.util.Scanner;

public class grade {
    public static void main(String ar[]){
        System.out.println("Enter the marks scored by the Student for written test");
        Scanner s = new Scanner(System.in);
        float a = s.nextFloat();
        System.out.println("For Lab exams");
        float b =s.nextFloat();
        System.out.println("For Assignments");
        float c =s.nextFloat();
        float g = (a*70)/100 + (b*20)/100 + (c*10)/100;
        System.out.println("Your overall grade is "+g);
    }
}
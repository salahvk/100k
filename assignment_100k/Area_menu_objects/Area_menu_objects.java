package Area_menu_objects;
import java.util.Scanner;
public class Area_menu_objects{
    Scanner s=new Scanner(System.in);
    void Circle(float r){
        System.out.println("Enter the radius");
        r=s.nextFloat();
        float area=(r*r)*22/7;
        System.out.println("Area : "+area);
      
    }

    void Square(float he){
        System.out.println("Enter the Height");
         he=s.nextFloat();
        float area=he*he;
        System.out.println("Area : "+area);
       
    }

    void Rectangle(float w,float h){
        System.out.println("Enter the width");
         w =s.nextFloat();
        System.out.println("Enter the height");
         h =s.nextFloat();
        float area=w*h;
        System.out.println("Area : "+area);
       
    }

    void Triangle(float b,float heig){
        System.out.println("Enter the base");
         b=s.nextFloat();
        System.out.println("Enter the height");
         heig =s.nextFloat();
        float area= (b*heig)/2;
        System.out.println("Area : "+area);
 
    }
}
package Area_menu_objects;
import java.util.Scanner;

public class Myclass extends Area_menu_objects{
    public static void main(String ar[]){
        float x=0;
        float y=0;
        Myclass my=new Myclass();
        System.out.println("Enter your choice");
        System.out.println("1. Circle");
        System.out.println("2. Square");
        System.out.println("3. Rectangle");
        System.out.println("4. Triangle");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();

        switch(a){
          case 1:
          my.Circle(x);
          break;

          case 2:
          my.Square(x);
          break;

          case 3:
          my.Rectangle(x,y);
          break;

          case 4:
          my.Triangle(x,y);
          break;
        }

    }

    void Circle(float r){
    super.Circle(r);
    }
    void Square(float he){
      super.Square(he);
    }
    void Rectangle(float w,float h){
      super.Rectangle(w,h);
    }
    void Triangle(float b,float heig){
      super.Triangle(b,heig);
    }
}
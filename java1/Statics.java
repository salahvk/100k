public class Statics{

     int a=100;
    public static void main(String ar[]){
       Statics s=new Statics();
       Statics s1=new Statics();
       s.a=10;
       s1.a=400;
       int a=10;
       System.out.println(s.a);
       System.out.println(s1.a);
    }
}
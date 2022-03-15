public class Pattern6 {
    public static void main(String[] args) {
        int n=4; //size int z=1;
        int z=1;
        int i,j,k;
        
        for (i=1;i<n; i++)
        
        { for (j=n-1; j>=i; j--)
        
         for (k=i-1; k>=-(i-1); k--) System.out.print("%d",z-abs(k));  System.out.print(" "); } z+=2;  System.out.print("\n");
        
        {
        
        
        
        
            System.out.println();
        }
    }
}

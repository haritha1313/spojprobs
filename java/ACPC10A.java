import java.util.Scanner;

public class ACPC10A {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(); 
        int b = sc.nextInt();
        int c = sc.nextInt();

        while( true ) {
            if(a == 0 && b==0 && c== 0)
                break;
            else {
                if( b == ((a + c) / 2.0))
                    System.out.println("AP " + (c + ( c - b )));
                else
                    System.out.println("GP " + ( c * ( c / b )));
                
                a = sc.nextInt(); 
                b = sc.nextInt();
                c = sc.nextInt();
            }
        }
    }
}

	

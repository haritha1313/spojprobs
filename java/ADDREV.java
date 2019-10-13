import java.util.Scanner;

public class ADDREV {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); //BufferedReader could also be used

        int N = sc.nextInt(); //Number of test cases is inputted
        for(long i = 0; i < N; i++) {
            long a = sc.nextLong();
            long b = sc.nextLong();

            a = numrev(a);
            b = numrev(b);
            a += b; //Sum of reverse of a and b is added and stored in a
            System.out.println(numrev(a)); //Sum of reverse of a and b is added and it's reverse is printed
        }
    }


    private static long numrev(long x) { //function to reverse a number through digit extraction
        long rem, rev=0;
		while(x > 0) {
			rem = x % 10;
			rev = rev * 10 + rem;
			x /= 10;
		}
		return rev;
    }
}

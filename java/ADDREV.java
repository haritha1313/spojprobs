import java.util.Scanner;

public class ADDREV {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        for(long i = 0; i < N; i++) {
            long a = sc.nextLong();
            long b = sc.nextLong();

            a = numrev(a);
            b = numrev(b);
            a += b;
            System.out.println(numrev(a));
        }
    }


    private static long numrev(long x) {
        long rem, rev=0;
		while(x > 0) {
			rem = x % 10;
			rev = rev * 10 + rem;
			x /= 10;
		}
		return rev;
    }
}

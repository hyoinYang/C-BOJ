import java.util.Scanner;

public class Main{


    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t > 0) {

            int r = sc.nextInt();
            String S = sc.next();
            char[] tmp = S.toCharArray();

            int idx = 0;
            char[] P = new char[r * (S.length())];

            for (char c : tmp) {
                for (int i = 0; i < r; i ++) {
                    P[idx] = c;
                    idx++;
                }
            }
            t--;
            System.out.println(P);
        }
    }
}

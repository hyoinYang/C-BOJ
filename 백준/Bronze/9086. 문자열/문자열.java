import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        for (int i = 0; i < T; i++){
           String str = sc.next();
           System.out.printf("%c%c", str.charAt(0),str.charAt(str.length()-1));
           System.out.printf("\n");
        }
    }
}

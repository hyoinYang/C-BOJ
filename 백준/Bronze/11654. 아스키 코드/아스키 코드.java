import java.util.Scanner;

class Ascii {
    Scanner sc = new Scanner(System.in);
    char ch;
    int ascii;

    public void printAscii(){
        ch = sc.next().charAt(0);
        ascii = (int)ch;

        if ('a' <= ascii && ascii <= 'z'){
            System.out.println(ascii);
        }
        if ('A' <= ascii && ascii <= 'Z'){
            System.out.println(ascii);
        }
        if ('0' <= ascii && ascii <= '9'){
            System.out.println(ascii);
        }
    }
}

public class Main{
    public static void main(String[] args){
        Ascii ascii = new Ascii();
        ascii.printAscii();
    }
}
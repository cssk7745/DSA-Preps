import java.util.Scanner;
public class calci {

public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter a character: ");
    char ch = scanner.next().charAt(0);

    System.out.println("You entered: " + ch);

    scanner.close();
}
}
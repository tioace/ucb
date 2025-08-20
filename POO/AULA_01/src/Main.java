import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner leitor = new Scanner(System.in); 
        int n1; 
        int n2; 
        
        System.out.println("Digite um numero: ");
        n1 = leitor.nextInt();
        System.out.println("Digite outro: ");
        n2 = leitor.nextInt();
        
        Soma s = new Soma(n1, n2);
        
        System.out.println(s);
        
        leitor.close();
    }
}

import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner leitor = new Scanner(System.in); 
        int n1; 
        int n2; 
        int escolha; 
        
        System.out.print("Digite um numero: ");
        n1 = leitor.nextInt();
        System.out.print("Digite outro: ");
        n2 = leitor.nextInt();
        
        Soma s = new Soma(n1, n2);
        Subtracao sub = new Subtracao(n1, n2);
        Divisao div = new Divisao(n1, n2); 
        Multiplicacao m = new Multiplicacao(n1, n2); 

        System.out.println("------------------------------\n");
        System.out.println("Escolha a operacao que deseja fazer: \n");
        System.out.println("(1) Soma                (2)Subtracao");
        System.out.println("(3) Multiplicacao       (4)Divisao");
        System.out.print("Opcao: ");
        escolha = leitor.nextInt(); 
        System.out.println();

        if (escolha == 1) {
            System.out.println(s);
        } else if (escolha == 2){
            System.out.println(sub); 
        } else if (escolha == 3) {
            System.out.println(m);
        } else if(escolha == 4){
            System.out.println(div);
        } else{
            System.out.println("Escolha uma opcao valida!");
        }

        
        
        
        leitor.close();
    }
}
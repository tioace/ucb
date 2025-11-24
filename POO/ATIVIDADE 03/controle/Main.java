import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        Database users = new Database();

        while (true) {

            System.out.println("");
            System.out.println(
                    "Escolha o tipo de usuário que deseja criar: \n [1] Admin \n [2] Administrador Temporário");
            int escolha = leitor.nextInt();
            leitor.nextLine();

            if (escolha == 1) {
                System.out.print("Digite o nome do Administrador: ");
                String nome = leitor.nextLine();
                System.out.print("Digite a senha: ");
                String senha = leitor.nextLine();
                System.out.print("Digite o token de segurança: ");
                String token = leitor.nextLine();

                User uad = new Admin(nome, senha, token);
                users.adicionar(uad);

                System.out.println("");
                System.out.println(
                        "Escolha a saída das informações: \n [1] Mostar apenas a posição do novo usuário \n [2] Mostra tudo");
                int saida = leitor.nextInt();

                if (saida == 1) {
                    System.out.println(users.mostrarUsuario(users.tamanho() - 1));
                    System.out.println("Posicao: " + (users.tamanho() - 1));
                } else if (saida == 2) {
                    for (int i = 0; i < users.tamanho(); i++) {
                        System.out.println(users.mostrarUsuario(i));
                        System.out.println("Posicao: " + i);
                    }
                }
            }

            else if (escolha == 2) {
                System.out.print("Digite o nome do Administrador Temporario: ");
                String nome = leitor.nextLine();
                System.out.print("Digite a senha: ");
                String senha = leitor.nextLine();
                System.out.print("Digite o token de segurança: ");
                String token = leitor.nextLine();

                User uadtp = new TemporaryAdmin(nome, senha, token);
                users.adicionar(uadtp);

                System.out.println("");
                System.out.println(
                        "Escolha a saída das informações: \n [1] Mostar apenas a posição do novo usuário \n [2] Mostra tudo");
                int saida = leitor.nextInt();

                if (saida == 1) {
                    for (int i = 0; i < users.tamanho(); i--) {
                        System.out.println(users.mostrarUsuario(i));
                        System.out.println("Posicao: " + i);
                    }
                } else if (saida == 2) {
                    for (int i = 0; i < users.tamanho(); i++) {
                        System.out.println(users.mostrarUsuario(i));
                        System.out.println("Posicao: " + i);
                    }
                }

            }
        }
    }
}
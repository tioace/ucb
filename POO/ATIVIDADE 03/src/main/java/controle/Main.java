package controle;

import modelo.*;
import dao.UserDAO;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);
        UserDAO dao = new UserDAO();

        while (true) {

            System.out.println("\n===== MENU =====");
            System.out.println("1 - Cadastrar Usuário");
            System.out.println("2 - Consultar Usuário por Nome");
            System.out.println("0 - Sair");
            System.out.print("Escolha: ");
            int opcao = leitor.nextInt();
            leitor.nextLine();
            
            if (opcao == 0) {
                System.out.println("Encerrando...");
                break;
            }
            
            if (opcao == 1) {
                
                System.out.println("\nEscolha o tipo de usuário:");
                System.out.println("1 - Admin");
                System.out.println("2 - Administrador Temporário");
                System.out.print("Escolha: ");
                int escolha = leitor.nextInt();
                leitor.nextLine();
                System.out.println("");

                System.out.print("Nome: ");
                String nome = leitor.nextLine();

                System.out.print("Senha: ");
                String senha = leitor.nextLine();

                System.out.print("Token de Segurança: ");
                String token = leitor.nextLine();

                try {
                    User user;

                    if (escolha == 1) {
                        user = new Admin(nome, senha, token);
                    } else {
                        user = new TemporaryAdmin(nome, senha, token);
                    }

                    dao.inserirUser(user);
                    System.out.println("Usuário cadastrado com sucesso!");

                } catch (Exception e) {
                    System.out.println("Erro ao cadastrar usuário: " + e.getMessage());
                }
            }

            else if (opcao == 2) {
                System.out.print("\nDigite o username para consultar: ");
                String nomeConsulta = leitor.nextLine();

                try {
                    User user = dao.findByUsername(nomeConsulta);

                    if (user == null) {
                        System.out.println("Usuário não encontrado.");
                    } else {
                        System.out.println("\n=== RESULTADO ===");
                        System.out.println(user.toString());
                    }

                } catch (Exception e) {
                    System.out.println("Erro na consulta: " + e.getMessage());
                }
            }

            else {
                System.out.println("Opção inválida!");
            }
        }

        leitor.close();
    }
}
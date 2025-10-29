import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws NomeInvalidoException, EmailInvalidoException {
        Scanner leitor = new Scanner(System.in); 
        
        ArrayList<Pessoa> pessoas = new ArrayList<>();
        ArrayList<Material> materiais = new ArrayList<>();
        ArrayList<Emprestimo> emprestimos = new ArrayList<>();
        
        
        while (true) {
            
            System.out.println("===== SISTEMA DE BIBLIOTECA =====");
            System.out.println("1 - Cadastrar Usuário");
            System.out.println("2 - Cadastrar Funcionário");
            System.out.println("3 - Listar Pessoas");
            System.out.println("4 - Cadastrar Livro");
            System.out.println("5 - Cadastrar Revista");
            System.out.println("6 - Listar Materiais");
            System.out.println("7 - Cadastrar Empréstimo");
            System.out.println("8 - Listar Empréstimos");
            System.out.println("0 - Sair");
            System.out.print("\nEscolha uma opção: ");
            
            int opcao = leitor.nextInt();
            leitor.nextLine();
            
            switch (opcao) {
                case 1:
                    System.out.print("Nome: ");
                    String nomeU = leitor.nextLine();
                    System.out.print("Email: ");
                    String emailU = leitor.nextLine();
                    System.out.print("Matricula: ");
                    int matricula = leitor.nextInt();
                    leitor.nextLine();
                    
                    Pessoa pu = new Usuario(nomeU, emailU, matricula);
                    pessoas.add(pu);
                    System.out.println("Usuario cadastrado com sucesso!\n");
                    
                    break;
                
                case 2:
                    System.out.print("Nome: ");
                    String nomeF = leitor.nextLine();
                    System.out.print("Email: ");
                    String emailF = leitor.nextLine();
                    System.out.print("Cargo: ");
                    String cargo = leitor.nextLine();
                    
                    Pessoa pf = new Funcionario(nomeF, emailF, cargo);
                    pessoas.add(pf);
                    System.out.println("Funcionário cadastrado com sucesso!\n");
                    
                    break;
                
                case 3:
                    System.out.println("=== Lista de Pessoas ===");
                    System.out.println("\n");
                    
                    for (int i = 0; i < pessoas.size(); i++) {
                        Pessoa p = pessoas.get(i); 
                        p.exibirInfo();
                        System.out.println("\n-------------------\n");
                    }
                    
                    System.out.println("\n");
                    break;
                    
                case 4:
                    System.out.print("Titulo: ");
                    String tituloL = leitor.nextLine();
                    System.out.print("Ano de publicacao: ");
                    int anoL = leitor.nextInt();
                    leitor.nextLine();
                    System.out.print("Edicao: ");
                    String edicao = leitor.nextLine();
                    
                    
                    Material ml= new Livro(tituloL, anoL, edicao); 
                    materiais.add(ml);
                    System.out.println("Livro cadastrado!\n");
                    
                    break;
                    
                case 5:
                    System.out.print("Titulo: ");
                    String tituloR = leitor.nextLine();
                    System.out.print("Ano de publicacao: ");
                    int anoR = leitor.nextInt();
                    System.out.print("Autor: ");
                    leitor.nextLine(); 
                    String autor = leitor.nextLine();
                    
                    
                    Material mr = new Revista(tituloR, anoR, autor);
                    materiais.add(mr);
                    System.out.println("Revista cadastrada!\n");
                    
                    
                    break;
                    
                case 6:
                    System.out.println("=== Lista de Materiais ===");
                    System.out.println("\n");
                    for (int i = 0; i < materiais.size(); i++) {
                        Material m = materiais.get(i);
                        m.descricao();
                        System.out.println("\n-------------------\n");
                    }
                    System.out.println("\n");
                        
                    break;
                    
                case 7:
                    if (pessoas.isEmpty() || materiais.isEmpty()) {
                        System.out.println("Eh necessário ter pelo menos uma pessoa e um material cadastrados.\n");
                        break;
                    }
                    System.out.println("Escolha o usuário (indice):");
                    for (int i = 0; i < pessoas.size(); i++) { 
                        System.out.println(i + " - " + pessoas.get(i).getNome());
                    }
                    System.out.print("Opcao: ");
                    int idxUsuario = leitor.nextInt();
                    leitor.nextLine();
                    
                    System.out.println("\nEscolha o material (indice):");
                    for (int i = 0; i < materiais.size(); i++) {
                        System.out.println(i + " - " + materiais.get(i).getTitulo());
                    }
                    System.out.print("Opcao: ");
                    int idxMaterial = leitor.nextInt();
                    leitor.nextLine();
                    
                    System.out.print("\nData de emprestimo: ");
                    String dataE = leitor.nextLine();
                    System.out.print("Data de devolucao: ");
                    String dataD = leitor.nextLine();
                    
                    emprestimos.add(new Emprestimo(pessoas.get(idxUsuario), materiais.get(idxMaterial), dataE, dataD));
                    System.out.println("Emprestimo cadastrado!\n");
                    
                    break;
                    
                case 8:
                    System.out.println("=== Lista de Empréstimos ===");
                    System.out.println("\n");

                    for (int i = 0; i < emprestimos.size(); i++) {
                        Emprestimo e = emprestimos.get(i);
                        e.exibirDetalhes();
                        System.out.println("\n-------------------\n");
                    }
                    System.out.println("\n");
                    
                    break;
                
                case 0:
                    System.out.println("Encerrando o sistema...");
                    leitor.close();
                    return;

                default:
                    System.out.println("Escolha uma opcao valida!\n");
                    break;
            }

        }
        
    }
}


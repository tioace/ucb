public class Main {
    public static void main(String[] args) throws Exception {
/*- 
Implemente uma classe chamada Main.java que contenha a instância de um Computador, um SistemaOperacional e 
três ou mais Programas contemplando os cenários: programa executado com sucesso, erro na instalação do programa 
(SSDOcupado maior que o disponível pelo Computador), erro na execução do programa (memoriaRAMAlocada maior que a disponível pelo Computador).  
*/
        Computador c1 = new Computador(16, 480, 8, 1.5);
        SistemaOperacional s1 = new SistemaOperacional(c1);
        Programa p1 = new Programa(8, 120, 8, 1);
        Programa p2 = new Programa(20, 120, 8, 1);
        Programa p3 = new Programa(8, 500, 8, 1);


        
        System.out.println("=== Executando Programa 1 ===");
        s1.executarPrograma(p1);
        
        System.out.println("\n=== Executando Programa 2 ===");
        s1.executarPrograma(p2);
        
        System.out.println("\n=== Executando Programa 3 ===");
        s1.executarPrograma(p3);

/*        System.out.println(p1);
        System.out.println(p2);
        System.out.println(p3);
        */
    }
}

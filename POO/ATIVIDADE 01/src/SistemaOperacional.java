public class SistemaOperacional {
    private Computador computador; 

    SistemaOperacional(Computador computador){
        super(); 
        this.computador = computador; 
    }

    public void setComputador(Computador computador) {
        this.computador = computador;
    }

    public Computador getComputador() {
        return computador;
    }

    public boolean executarPrograma(Programa p){
         
        if (p.getSSDopcupado() > this.computador.getSsd()){
            System.out.println("Erro na instalacao do programa. ");
            return false; 
        } else if(p.getMemoriaRAMlocada() > this.computador.getMemoriaRAM()){
            System.out.println("Erro na execucao do programa. ");
            return false; 
        } 

        double tempoExecucao = p.getQuantidadeOperacoes() / (computador.getOperacoesPorSegundo() * computador.getNucleos());
        
        System.out.println("Programa executado com sucesso.");
        System.out.println(String.format("Tempo de execucao: %.2f segundos", tempoExecucao));
        return true; 
        
    }
}
/* 
- Implemente uma classe chamada Main.java que contenha a instância de um Computador, um SistemaOperacional e 
três ou mais Programas contemplando os cenários: programa executado com sucesso, erro na instalação do programa 
(SSDOcupado maior que o disponível pelo Computador), erro na execução do programa (memoriaRAMAlocada maior que a disponível pelo Computador). 

- As mensagens de estado da execução do programa devem ser impressas dentro do método executarPrograma.

- Quando a execução do programa ocorrer com sucesso, deverá ser apresentado também o tempo de execução: 
quantidade de operações do programa dividida pela (quantidade de operações por segundo * núcleos do computador).

- Nenhum atributo deve ser acessado diretamente. Implemente os métodos getters and setters.

- Implemente o método construtor para cada classe, considerando todos os atributos necessários.

*/
public class Usuario extends Pessoa {
    private Integer matricula; 

    Usuario(String nome, String email, Integer matricula) {
        super(nome, email);
        this.matricula = matricula; 
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public int getMatricula() {
        return matricula;
    }


    public void exibirInfo(){
                System.out.println(String.format("NOME: %s\nEMAIL: %s\nMATRICULA: %d", getNome(), getEmail(), this.matricula));
    }
    
}

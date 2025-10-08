public class Funcionario extends Pessoa {
private String cargo; 

    Funcionario(String nome, String email, String cargo) {
        super(nome, email);
        this.cargo = cargo; 
    }
    
    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    public String getCargo() {
        return cargo;
    }


    public void exibirInfo(){
        System.out.println(String.format("NOME: %s\nEMAIL: %s\nCARGO: %s", getNome(), getEmail(), this.cargo));
    }
}

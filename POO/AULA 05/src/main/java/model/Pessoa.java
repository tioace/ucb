public class Pessoa {
    private String nome; 
    private String email;

    Pessoa(String nome, String email){
        super();
        this.nome = nome; 
        this.email = email; 
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getNome() {
        return nome;
    }

    public String getEmail() {
        return email;
    }

    public void exibirInfo(){
        System.out.println(String.format("NOME: %s\nEMAIL: %s\n", this.nome, this.email));
    }
}

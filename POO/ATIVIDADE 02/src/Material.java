public class Material {
    private String titulo; 
    private Integer anoPublicacao; 

    Material(String titulo, Integer anoPublicacao){
        super();
        this.titulo = titulo;
        this.anoPublicacao = anoPublicacao;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public void setAnoPublicacao(Integer anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    public String getTitulo() {
        return titulo;
    }

    public Integer getAnoPublicacao() {
        return anoPublicacao;
    }


    public void descricao(){
        System.out.println(String.format("TITULO: %s \nANO DE PUBLICACAO: %d\n", this.titulo, this.anoPublicacao));
    }
    
}

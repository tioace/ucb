public class Revista extends Material {
    private String autor; 

    Revista(String titulo, Integer anoPublicacao, String autor) {
        super(titulo, anoPublicacao);
        this.autor = autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getAutor() {
        return autor;
    }

    public void descricao(){
        System.out.println(String.format("TITULO: %s\nANO DE PUBLICACAO: %d\nAUTOR: %s\n", getTitulo(), getAnoPublicacao(), this.autor));
    }
    
}

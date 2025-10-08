public class Livro extends Material {
    private String edicao; 

    Livro(String titulo, Integer anoPublicacao, String edicao) {
        super(titulo, anoPublicacao);
        this.edicao = edicao; 
    }
    
    public void setEdicao(String edicao) {
        this.edicao = edicao;
    }

    public String getEdicao() {
        return edicao;
    }

    public void descricao(){
        System.out.println(String.format("TITULO: %s\nANO DE PUBLICACAO: %d\nEDICAO: %s\n", getTitulo(), getAnoPublicacao(), this.edicao));
    }
}

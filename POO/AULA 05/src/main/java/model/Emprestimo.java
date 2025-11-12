public class Emprestimo {
    private Pessoa pessoa; 
    private Material material; 
    private String dataEmprestimo; 
    private String dataDevolucao; 

    Emprestimo(Pessoa pessoa, Material material, String dataEmprestimo, String dataDevolucao){
        super();
        this.pessoa = pessoa;
        this.material = material;
        this.dataEmprestimo = dataEmprestimo;
        this.dataDevolucao = dataDevolucao;
    }

    public void setPessoa(Pessoa pessoa) {
        this.pessoa = pessoa;
    }

    public void setMaterial(Material material) {
        this.material = material;
    }

    public void setDataEmprestimo(String dataEmprestimo) {
        this.dataEmprestimo = dataEmprestimo;
    }

    public void setDataDevolucao(String dataDevolucao) {
        this.dataDevolucao = dataDevolucao;
    }

    
    public Pessoa getPessoa() {
        return pessoa;
    }

    public Material getMaterial() {
        return material;
    }

    public String getDataEmprestimo() {
        return dataEmprestimo;
    }

    public String getDataDevolucao() {
        return dataDevolucao;
    }


    public void exibirDetalhes(){
        System.out.println(String.format("PESSOA: %s\nMATERIAL: %s\nDATA DE EMPRESTIMO: %s\nDATA DE DEVOLUCAO: %s\n", pessoa.getNome(), this.material.getTitulo(), this.dataEmprestimo, this.dataDevolucao));
    }
}

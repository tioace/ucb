public class Municipio {
    private String nome; 
    private String estado; 
    private double precoM2; 

    Municipio(String nome, String estado, double M2){
        super(); 
        this.nome = nome; 
        this.estado = estado; 
        this.precoM2 = M2; 
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setPrecoM2(double precoM2) {
        this.precoM2 = precoM2;
    }

    public String getEstado() {
        return estado;
    }
    
    public String getNome() {
        return nome;
    }
    
    public double getPrecoM2() {
        return precoM2;
    }

}

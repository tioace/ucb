public class Imovel {
    private Municipio municipio; 
    private double areaM2;
    private int vagas; 

    Imovel(Municipio municipio, double areaM2, int vagas){
        super(); 
        this.municipio = municipio; 
        this.vagas = vagas; 
        this.areaM2 = areaM2; 
    }

    public void setAreaM2(double areaM2) {
        this.areaM2 = areaM2;
    }

    public void setMunicipio(Municipio municipio) {
        this.municipio = municipio;
    }

    public void setVagas(int vagas) {
        this.vagas = vagas;
    }
    
    public double getAreaM2() {
        return areaM2;
    }
    
    public Municipio getMunicipio() {
        return municipio;
    }
    
    public int getVagas() {
        return vagas;
    }

    public double calcularIPTU(){
        double preco = (this.municipio.getPrecoM2() * this.getAreaM2()) * 1.005;
        return preco; 
    }
}

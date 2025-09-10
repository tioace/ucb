public class Apartamento extends Imovel {
    private boolean elevador; 

    Apartamento(Municipio municipio, double areaM2, int vagas, boolean elevador) {
        super(municipio, areaM2, vagas);
        this.elevador = elevador; 
        //TODO Auto-generated constructor stub
    }
    
        public void setElevador(boolean elevador) {
        this.elevador = elevador;
    }

    public boolean getElevador(){
        return elevador; 
    }

    @Override
    public String toString() {
        String t = String.format("Imovel localizado no municipio %s de area %.2f tem o iptu de valor: R$ %.2f", getMunicipio() ,getAreaM2() ,calcularIPTU()); 
        return t;
    }
}

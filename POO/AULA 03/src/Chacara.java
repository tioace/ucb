public class Chacara extends Imovel{
    private boolean pocoArtesiano; 
    
    Chacara(Municipio municipio, double areaM2, int vagas, boolean pocoArtesiano) {
        super(municipio, areaM2, vagas);
        this.pocoArtesiano = pocoArtesiano; 
    }
    
    public void setPocoArtesiano(boolean pocoArtesiano) {
        this.pocoArtesiano = pocoArtesiano;
    }

    public boolean getpocoArtesiano(){
        return pocoArtesiano; 
    }

    @Override
    public String toString() {
        String t = String.format("Imovel localizado no municipio %s de area %.2f tem o iptu de valor: R$ %.2f", this.getMunicipio(), getAreaM2() ,calcularIPTU()); 
        
        return t;
    }
}

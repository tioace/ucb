public class Casa extends Imovel {

    Casa(Municipio municipio, double areaM2, int vagas) {
        super(municipio, areaM2, vagas);
        //TODO Auto-generated constructor stub
    }

    @Override
    public String toString() {
        String t = String.format("Imovel localizado no municipio %s de area %.2f tem o iptu de valor: R$ %.2f", this.getMunicipio(), getAreaM2() ,calcularIPTU()); 
        return t;
    }
}

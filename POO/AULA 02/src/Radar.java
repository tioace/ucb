public class Radar {
    private float limite;
    private String modelo; 
    private String localizacao;

    Radar(float limite, String modelo, String localizacao){
        super();
        this.limite = limite;
        this.modelo = modelo;
        this.localizacao = localizacao;
    }

    public float getLimite() {
        return limite;
    }
    
    public String getLocalizacao() {
        return localizacao;
    }

    public String getModelo() {
        return modelo;
    }
    
    public void setLimite(float limite) {
        this.limite = limite;
    }
    
    public void setLocalizacao(String localizacao) {
        this.localizacao = localizacao;
    }
    
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }


    public void notificacao(String placa, float velocidade){
        System.out.println("Limite de velocidade: " + this.limite);
        System.out.println("Velocidade avaliada: " + velocidade);
        System.out.println("Placa: " + placa);
        System.out.println("O carro passou do limite de velocidade!");
    }

    public void avaliar(Carro carro){
        if (carro.getVelocidade() > limite){
            notificacao(carro.getPlaca(), carro.getVelocidade());
        } else if(carro.getVelocidade() <= limite){
            System.out.println("O carro avalidado esta dentro do limite de velocidade");
        }
    }

}

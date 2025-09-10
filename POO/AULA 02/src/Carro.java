public class Carro {
    private int ano; 
    private String modelo; 
    private String placa;
    private float velocidade; 

    Carro(int ano, String modelo, String placa, float velocidade){
        super(); 
        this.ano = ano; 
        this.modelo = modelo;
        this.placa = placa; 
        this.velocidade = velocidade;
    }


    public int getAno() {
        return ano;
    }

    public String getModelo() {
        return modelo;
    }

    public String getPlaca() {
        return placa;
    }

    public float getVelocidade() {
        return velocidade;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public void setVelocidade(float velocidade) {
        this.velocidade = velocidade;
    }


    public float acelerar(float velocidade){
        velocidade += 5;
        return velocidade; 
    }

    public float frear(float velocidade){
        
        if(velocidade > 0){
            velocidade -= 5;
        }else if(velocidade <= 0 || velocidade - 5 < 0){
            velocidade = 0; 
        }

        return velocidade; 
    }
}

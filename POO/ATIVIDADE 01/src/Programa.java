public class Programa {
    private Integer memoriaRAMlocada; 
    private Integer SSDopcupado; 
    private Integer nucleos; 
    private Integer quantidadeOperacoes; 

    Programa(int memoriaRAM, int SSDopcupado, int nucleos, int quantidadeOperacoes){
        super(); 
        this.memoriaRAMlocada = memoriaRAM; 
        this.SSDopcupado = SSDopcupado;
        this.nucleos = nucleos; 
        this.quantidadeOperacoes = quantidadeOperacoes; 
    }

    public void setMemoriaRAMlocada(Integer memoriaRAMlocada) {
        this.memoriaRAMlocada = memoriaRAMlocada;
    }

    public void setNucleos(Integer nucleos) {
        this.nucleos = nucleos;
    }

    public void setQuantidadeOperacoes(Integer quantidadeOperacoes) {
        this.quantidadeOperacoes = quantidadeOperacoes;
    }

    public void setSSDopcupado(Integer sSDopcupado) {
        SSDopcupado = sSDopcupado;
    }

    public Integer getMemoriaRAMlocada() {
        return memoriaRAMlocada;
    }
    
    public Integer getNucleos() {
        return nucleos;
    }

    public Integer getQuantidadeOperacoes() {
        return quantidadeOperacoes;
    }

    public Integer getSSDopcupado() {
        return SSDopcupado;
    }
    
}

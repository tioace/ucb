public class Computador {
    private Integer memoriaRAM; 
    private Integer ssd; 
    private Integer nucleos;
    private Double operacoesPorSegundo; 

    Computador(int memoriaRAM, int ssd, int nucleos, Double operacoesPorSegundo){
        super(); 
        this.memoriaRAM = memoriaRAM; 
        this.ssd = ssd;
        this.nucleos = nucleos;
        this.operacoesPorSegundo = operacoesPorSegundo; 
    }

    public void setMemoriaRAM(Integer memoriaRAM) {
        this.memoriaRAM = memoriaRAM;
    }

    public void setNucleos(Integer nucleos) {
        this.nucleos = nucleos;
    }

    public void setOperacoesPorSegundo(Double operacoesPorSegundo) {
        this.operacoesPorSegundo = operacoesPorSegundo;
    }

    public void setSsd(Integer ssd) {
        this.ssd = ssd;
    }

    public Integer getMemoriaRAM() {
        return memoriaRAM;
    }

    public Integer getNucleos() {
        return nucleos;
    }
    
    public Double getOperacoesPorSegundo() {
        return operacoesPorSegundo;
    }

    public Integer getSsd() {
        return ssd;
    }


}

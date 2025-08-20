public class Soma {

    private int n1;
    private int n2;

    Soma(int n1, int n2){
        super(); 
        this.n1 = n1; 
        this.n2 = n2;
    }

    public int getN1() {
        return n1;
    }

    public void setN1(int n1) {
        this.n1 = n1;
    }

    public int getN2() {
        return n2;
    }

    public void setN2(int n2) {
        this.n2 = n2;
    }

    public int Somar(int n1, int n2){
        int soma = n1 + n2; 
        return soma; 
    }

    public String toString(){
        String t = n1 + " + " + n2 + " = " + Somar(n1, n2); 
        return t; 
    }


}

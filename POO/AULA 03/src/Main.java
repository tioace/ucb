public class Main {
    public static void main(String[] args) {
        Municipio m1 = new Municipio("Ilheus", "Bahia", 2.5); 
        Municipio m2 = new Municipio("Feira de Santana", "Bahia", 3.5); 

        Imovel c1 = new Casa(m1, 30.0, 1); 
        Imovel ch1 = new Chacara(m1, 150.0, 1, false); 
        Imovel a1 = new Apartamento(m2, 30.0, 1, false); 

        System.out.println(c1.toString()); 
        System.out.println(ch1.toString());
        System.out.println(a1.toString());
        
    }
}

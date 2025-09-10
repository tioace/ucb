//import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        /*Scanner leitor = new Scanner(System.in);

        System.out.print("Digite o ano do carro: ");
        int ano = leitor.nextInt(); 
        System.out.print("Digite o modelo do carro: ");
        leitor.nextLine();
        String modelo = leitor.nextLine(); 
        System.out.print("Digite a placa do carro: ");
        String placa = leitor.nextLine(); 
        System.out.print("Digite a velocidade do carro: ");
        float velocidade = leitor.nextFloat(); 
        
        
        Carro c1 = new Carro(ano, modelo, placa, velocidade); 
        
        
        System.err.println("\n----------------------------------\n");
        
        System.out.print("Digite o limite do radar: ");
        float limite = leitor.nextFloat(); 
        System.out.print("Digite o modelo do radar: ");
        leitor.nextLine();
        String modeloR = leitor.nextLine(); 
        System.out.print("Digite a localizacao do radar: ");
        String localizacao = leitor.nextLine(); 
        
        Radar r1 = new Radar(limite, modeloR, localizacao); 
        
        System.err.println("\n----------------------------------\n");*/
        int ano = 2020;
        String modelo = "Opala"; 
        String placa = "HKO258R";
        float velocidade = 50;

        float limite = 60;
        String modeloR = "Pardal"; 
        String localizacao = "Pistao Sul";

        Carro c1 = new Carro(ano, modelo, placa, velocidade);
        c1.acelerar(velocidade);
        c1.acelerar(velocidade); 
        c1.acelerar(velocidade); 
        
        Radar r1 = new Radar(limite, modeloR, localizacao);
        r1.avaliar(c1);

        //leitor.close();
    }
}

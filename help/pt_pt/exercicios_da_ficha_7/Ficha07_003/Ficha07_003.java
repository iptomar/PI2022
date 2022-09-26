// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

public class Ficha07_003 {

    //Main Function
    public static void main( String[] args) {
        System.out.print("Somatório Fórmula\n" );
        int soma = 0 ;
        for( int i = 1; i < 6; i = i + 1 ) {
            int f = 2 * i - 1 ;
            System.out.print(soma + " + " + f );
            soma +=f;
            System.out.print(" \t= " + soma + "\n" );
        }
        System.out.print("\nSoma = " + soma );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 16:13

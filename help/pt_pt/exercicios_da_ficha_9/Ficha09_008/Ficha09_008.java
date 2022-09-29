// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

public class Ficha09_008 {

    //Main Function
    public static void main( String[] args) {
        System.out.print("Soma da sequência de fibonacci\n " );
        int f0 = 1 ;
        int f1 = 1 ;
        System.out.print(f0 + " " + f1 );
        int soma = 2 ;
        while(f0 + f1 < 100 ){
            int fn = f0 + f1 ;
            soma +=fn;
            System.out.print(" " + fn );
            f1 = f0 ;
            f0 = fn ;
        }
        System.out.print("\nSoma = " + soma );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Thu, 2022 Sep 29 12:25

// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

public class Ficha04_014 {

    //Main Function
    public static void main( String[] args) {
        System.out.print("Tabela de verdade do OU\n" );
        boolean var = true || true ;
        System.out.print("\n" + true + "\t||\t" + true + "\t= " + var );
        var = true || false ;
        System.out.print("\n" + true + "\t||\t" + false + "\t\t= " + var );
        var = false || true ;
        System.out.print("\n" + false + "\t\t||\t" + true + "\t= " + var );
        System.out.print("\n" + false + "\t\t||\t" + false + "\t\t= " + ( false || false ) );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:32

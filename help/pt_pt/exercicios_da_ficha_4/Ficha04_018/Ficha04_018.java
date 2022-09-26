// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

public class Ficha04_018 {

    //Main Function
    public static void main( String[] args) {
        System.out.print("\n4 + 2 * 3 ^ 2 - 1\t= " );
        System.out.print(4 + 2 * Integer.valueOf( Math.pow( 3 , 2 ) ) - 1 );
        System.out.print("\n2 + 3 > 2 ^ 2  \t= " );
        System.out.print(2 + 3 > Integer.valueOf( Math.pow( 2 , 2 ) ) );
        System.out.print("\n2 < 3 && 4 >= 2 \t= " + ( 2 < 3 && 4 >= 2 ) );
        System.out.print("\n2 > 3 || !(4 == 2) \t= " + ( 2 > 3 || ! ( 4 == 2 ) ) );
        boolean var = true && ! false || 2 > 3 ;
        System.out.print("\n_T && ! _F || 2 > 3 \t= " + var );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Mon, 2022 Sep 26 15:33

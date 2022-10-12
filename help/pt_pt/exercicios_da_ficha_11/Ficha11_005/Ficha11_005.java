// Programador           -

public class Ficha11_005 {

    //Main Function
    public static void main( String[] args) {
        linha() ;
        System.out.print("Numeros entre 1 e 5\n" );
        linha() ;
        for( int i = 1; i < 6; i = i + 1 ) {
            System.out.print(i + "\n" );
        }
        linha() ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha( ){
        for( int i = 0; i < 20; i = i + 1 ) {
            System.out.print("*" );
        }
        System.out.print("\n" );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:09

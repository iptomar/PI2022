// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

public class Ficha07_003 {

    //Main Function
    public static void main( String[] args) {
        System.out.print("Formula Summation\n" );
        int sum = 0 ;
        for( int i = 1; i < 6; i = i + 1 ) {
            int f = 2 * i - 1 ;
            System.out.print(sum + " + " + f );
            sum +=f;
            System.out.print(" \t= " + sum + "\n" );
        }
        System.out.print("\nSum= " + sum );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Fri, 2022 Sep 30 22:36

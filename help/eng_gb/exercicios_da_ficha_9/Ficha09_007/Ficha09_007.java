// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

public class Ficha09_007 {

    //Main Function
    public static void main( String[] args) {
        int f0 = 1 ;
        int f1 = 1 ;
        System.out.print(f0 + "\n" + f1 + "\n" );
        while(f0 + f1 < 100 ){
            int fn = f0 + f1 ;
            System.out.print(fn + "\n" );
            f1 = f0 ;
            f0 = fn ;
        }
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11

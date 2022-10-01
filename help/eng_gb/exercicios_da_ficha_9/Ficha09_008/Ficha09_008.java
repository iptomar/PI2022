// Programmer           Ant0ni0 M@ns0 - Ant0ni0 M@ns0

public class Ficha09_008 {

    //Main Function
    public static void main( String[] args) {
        System.out.print("Fibonaci sequence sum\n " );
        int f0 = 1 ;
        int f1 = 1 ;
        System.out.print(f0 + " " + f1 );
        int sum = 2 ;
        while(f0 + f1 < 100 ){
            int fn = f0 + f1 ;
            sum +=fn;
            System.out.print(" " + fn );
            f1 = f0 ;
            f0 = fn ;
        }
        System.out.print("\nSum = " + sum );
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	Sat, 2022 Oct 01 00:11

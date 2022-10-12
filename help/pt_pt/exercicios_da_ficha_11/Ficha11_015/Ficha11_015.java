// Programador           -

import java.util.Scanner;

public class Ficha11_015 {

    static Scanner keyb = new Scanner(System.in);//keyboard

    //Main Function
    public static void main( String[] args) {
        System.out.print("Altura   : " );
        int altura = Integer.valueOf(keyb.nextLine());
        System.out.print("Largura  : " );
        int largura = Integer.valueOf(keyb.nextLine());
        System.out.print("Limite   : " );
        String limite = keyb.nextLine();
        System.out.print("Interior : " );
        String interior = keyb.nextLine();
        caixa(largura , altura , limite , interior ) ;
    }

    //::::::::::::::::::::::::::::::::::::::::::::::::::
    //User Defined Functions Code
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void linha( int n , String c){
        for( int i = 0; i < n; i = i + 1 ) {
            System.out.print(c );
        }
        System.out.print("\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void interior( int n , String cl , String ci){
        System.out.print(cl );
        for( int i = 1; i < n - 1; i = i + 1 ) {
            System.out.print(ci );
        }
        System.out.print(cl + "\n" );
    }
    //::::::::::::::::::::::::::::::::::::::::::::::::::
    public static void caixa( int larg , int alt , String cl , String ci){
        linha(larg , cl ) ;
        for( int i = 1; i < alt - 1; i = i + 1 ) {
            interior(larg , cl , ci ) ;
        }
        linha(larg , cl ) ;
    }

}
//Java  - Automatic translated by Algorithmi 22.05
//(c) Ant0nio M@nso 	quarta, 2022 out 12 20:14

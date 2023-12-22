package cobaexceptionmulti;
import java.util.Scanner;
import java.util.InputMismatchException;
/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI
 * 19102143
 * IF 07 N
 * 
 */

public class CobaExceptionMulti {
    public static void main(String[] args) {
        Scanner Input = new Scanner(System.in);
        
        try{
            System.out.print("Masukan Bilangan : ");
            int bil1 = Input.nextInt();
            
            System.out.print("Masukan Pembagi : ");
            int bil2 = Input.nextInt();
            
            int hasil = bil1/bil2;
            System.out.println(bil1 + " : " + bil2 + " = " + hasil + (" dibulatkan"));
        
        //Exception untuk aritmatika
        } catch(ArithmeticException e){
            System.out.println("Error : Tidak dapat melakukan kalkulasi");   
        //Exception untuk input yang tidak sesuai dengan tipe data
        } catch(InputMismatchException e){
            System.out.println("Error : Tipe data bukan integer");
        //Finally, akan mengeluarkan output
        } finally{
            System.out.println("\nFinally akan tetap berjalan, tidak"
                    + " peduli hasil dari try-catch seperti apa"); 
        }    
    }
}

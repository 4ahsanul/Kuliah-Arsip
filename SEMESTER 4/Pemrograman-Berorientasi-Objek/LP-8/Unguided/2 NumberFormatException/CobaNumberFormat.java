package cobanumberformat;
import java.util.Scanner;
/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI
 * 19102143
 * IF 07 N
 */

public class CobaNumberFormat {
public static void main(String[] args) {
        //Deklarasi fields
        int number;
 
        //Buat scanner untuk input
        Scanner input = new Scanner(System.in);
 
        //Cek kondisi, jika belum memasukan data yang valid akan terus looping
        while (true) {
            //Tampil pesan
            System.out.println("Masukan angka Integer: ");
 
            //Melakukan Try-Catch
            try {
                // Parsing user input ke integer
                // menggunakan parseInt() method
                number = Integer.parseInt(input.next());
 
                //Angka bisa valid atau tidak valid
 
                //Jika angka valid tampilkan pesan
                System.out.println("Anda memasukan angka: " + number);
                break;
            }
 
            //Catch block untuk mengatasi NumberFormatException
            catch (NumberFormatException e) {
                //Tampilkan jika terjadi exception
                System.out.println("NumberFormatException terjadi");
            }
        }
    }
}

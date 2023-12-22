package cobafilenotfound;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI
 * 19102143
 * IF 07 N
 */

public class CobaFileNotFound {
    public static void main(String args[])  {
        try {
            //Mencari file yang akan dibaca
            File file = new File("D://!KULIAH!//!Kuliah!//!KULIAH!//4 SEMESTER "
                    + "4//PBO//LP8ProjectFinal//file1.txt");
            //Untuk membaca file
            Scanner sc = new Scanner(file);
            while (sc.hasNextLine())
            System.out.println(sc.nextLine());
        
        //Catch block untuk mengatasi FileNotFoundException
        } catch (FileNotFoundException e) {
           System.out.println("File tidak ditemukan");
        }
    }
}

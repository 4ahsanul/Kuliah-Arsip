package smartphone;

// Library yang digunakan adalah Scanner untuk input
import java.util.Scanner;

/**
 *
 * @author Filfimo Yuflzi Ahsanul Hulqi
 * 19102143
 */
public class MainSmartphone {
    public static void main(String[] args) {
        // Pembuatan Objek baru yaitu Smartphone dan Scanner
        Smartphone a = new Smartphone();
        Scanner baca = new Scanner(System.in);
        
        // Welcome
        System.out.println("Selamat Datang Di Program Handphone");
        // Fields aksi untuk menu pilihan dan if else
        String aksi;
        // Menu dan loop
        while(true){
            System.out.println("===== INTERFACE =====");
            System.out.println("[1] Browse");
            System.out.println("[2] Streaming");
            System.out.println("[3] Players");
            System.out.println("[4] Telepon");
            System.out.println("[5] Contact");
            System.out.println("[6] Pesan");
            System.out.println("[7] Vidcall");
            System.out.println("[8] Kalender");
            System.out.println("[9] Jam");
            System.out.println("[10] Alarm");
            System.out.println("[0] Keluar");
            System.out.println("=====================");
            System.out.println("Pilih Input >");
            // Melakukan input sesuai menu
            aksi = baca.nextLine();
            // Kondisi if else sesuai input dari aksi
            if(aksi.equalsIgnoreCase("1")){
                a.Browse();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("2")){
                a.Streaming();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("3")){
                a.Players();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("4")){
                a.Telepon();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("5")){
                a.Contact();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("6")){
                a.Pesan();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("7")){
                a.Vidcall();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("8")){
                a.Kalender();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("9")){
                a.Jam();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("10")){
                a.Alarm();
                System.out.println();
            } else if (aksi.equalsIgnoreCase("0")){
                System.exit(0);
            } else {
                System.out.println("Kamu memilih input yang salah!");
                System.out.println();
            }
        }
    }    
}

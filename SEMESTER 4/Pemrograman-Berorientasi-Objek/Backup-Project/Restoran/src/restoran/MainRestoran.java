package restoran;

// Import library scanner
import java.util.Scanner;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class MainRestoran {
    // Pembuatan method untuk menampilkan menu
    private static void tampilkanMenu(){
        int nomorItem = 1;
        for(Item item : menu){
            System.out.println(nomorItem++ + ". " + item.ShowDetail());
        }
        System.out.println();
    }
    
    // Method untuk menu
    private static Item[] menu = {
        new Item("Mendoan", "Makanan", 1000),
        new Item("Es Teh", "Makanan", 2500),
        new Item("Aneka Sayur", "Makanan", 5000),
        new Item("Paha Ayam", "Makanan", 7500),
        new Item("Sate Ayam", "Makanan", 15000),
    };
    
    public static void main(String[] args) {
        // Pembuatan Objek
        Scanner input = new Scanner(System.in);
        // Kondisi Looping
        boolean keepLooping = true;
        
        // Input nama
        System.out.println("Masukan Nama");
        String namaPembeli = input.nextLine();
        // Pembuatan objek pembeli
        Pembeli pembeli = new Pembeli(namaPembeli);
        System.out.println();
        
        // Looping kondisi
        do {
            System.out.println("===== MENU UTAMA =====");
            System.out.println("1. Pesan Makanan");
            System.out.println("2. Lihat history pesanan");
            System.out.println("3. Kosongkan history");
            System.out.println("4. Keluar");
            System.out.println("> ");
            
            // Nav untuk memilih menu
            int nav = input.nextInt();
            System.out.println();
            
            switch(nav){
                // Nav 1, akan menampilkan menu
                case 1:
                    tampilkanMenu();
                    System.out.println("Pilih makanan yang ingin dipesan");
                    System.out.println("Input angka 1-5");
                    // User dapat memilih pesanan dari method menu
                    int indexItem = input.nextInt() -1;
                    
                    // Jika user tidak memasukan input yang benar
                    if (indexItem < 0 || indexItem >= menu.length){
                        System.out.println("Mohon masukan input yang benar");
                    }
                    // Jika user melakukan input yang sesuai, maka akan dilakukan
                    // methods lakukan pemesanan dari class pembeli
                    else{
                        pembeli.lakukanPemesanan(menu[indexItem]);
                    }
                    System.out.println();
                break;
                    
                // Nav 2, akan menampilkan history pemesanan
                case 2:
                    pembeli.lihatHistoryPemesanan();
                    System.out.println();
                    break;
                 
                // Nav 3, user dapat melakukan kosongkan history
                // jadi, jika user melihat pada nav 2, pesanan yang sudah dipesan
                // akan menghilang
                case 3:
                    pembeli.kosongkanHistory();
                    System.out.println();
                    break;
                    
                // Nav 4, program selesai
                case 4:
                    System.out.println("Program Keluar");
                    System.out.println();
                    keepLooping = false;
                    break;
                
                // Nav != 4, akan muncul output bahwa input yang dimasukkan tidak
                // tidak sesuai
                default:
                    System.out.println("Tolong masukan input yang sesuai");
                    System.out.println();
                    break;
            }
        // Kondisi dari looping do while
        } while(keepLooping);
        
    }
}

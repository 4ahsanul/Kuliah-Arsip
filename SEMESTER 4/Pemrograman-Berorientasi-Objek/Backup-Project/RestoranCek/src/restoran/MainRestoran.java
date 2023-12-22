/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package restoran;
import java.util.Scanner;
/**
 *
 * @author 62821
 */
public class MainRestoran {
    private static void tampilkanMenu(){
        int nomorItem = 1;
        for(Item item : menu){
            System.out.println(nomorItem + ". " + item.showDetail());
        }
        System.out.println();
    }
    
    private static Item[] menu = {
        new Item("Mendoan", "Makanan", 1000),
        new Item("Es Teh", "Makanan", 2500),
        new Item("Aneka Sayur", "Makanan", 5000),
        new Item("Paha Ayam", "Makanan", 7500),
        new Item("Sate Ayam", "Makanan", 15000),
    };
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        boolean keepLooping = true;
        
        System.out.println("Masukan Nama");
        String namaPembeli = input.nextLine();
        Pembeli pembeli = new Pembeli(namaPembeli);
        
        System.out.println();
        do {
            System.out.println("===== MENU UTAMA =====");
            System.out.println("1. Pesan Makanan");
            System.out.println("2. Lihat history pesanan");
            System.out.println("3. Kosongkan history");
            System.out.println("4. Keluar");
            System.out.println("> ");
            
            int nav = input.nextInt();
            System.out.println();
            
            switch(nav){
                case 1:
                    tampilkanMenu();
                    System.out.println("Pilih makanan yang ingin dipesan");
                    int indexItem = input.nextInt() -1;
                    
                    if (indexItem < 0 || indexItem >= menu.length)
                        System.out.println("Mohon masukan input yang benar");
                    else 
                        pembeli.lakukanPemesanan(menu.[indexItem]);
                break;
                    
                case 2:
                    pembeli.lihatHistoryPemesanan();
                    break;
                 
                case 3:
                    pembeli.kosongkanHistory();
                    break;
                    
                case 4:
                    System.out.println("Program Keluar");
                    keepLooping = false;
                    
                default:
                    System.out.println("Tolong masukan input yang sesuai");
                    System.out.println();
                    break;
            }
        } while(keepLooping);
        
    }   
}

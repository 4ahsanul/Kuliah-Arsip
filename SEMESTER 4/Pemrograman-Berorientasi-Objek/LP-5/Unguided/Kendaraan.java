package kendaraan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Kendaraan {
    public static void main(String[] args) {
        //Pembuatan Objek dari MiniBus
        MiniBus obj = new MiniBus();
        
        System.out.println("======== PEWARISAN JAMAK KENDARAAN ========");
        System.out.println();
        //Pemanggilan Method untuk tampil Info kendaraan
        obj.tampilInfo();
        //Pemanggilan Method untuk tampil hitung pajak kendaraan
        obj.hitungPajak();
        System.out.println();
        System.out.println("===========================================");
    }  
}
package binatang;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class MainBinatang {
    public static void main(String[] args) {
        // Pembuatan Objek dari anak kelas
        Anjing a = new Anjing();
        Kucing b = new Kucing();
        Hamster c = new Hamster();
        
        // Set nama dari method induk yang nanti diturunkan ke anak
        a.nama = "Anjing";
        b.nama = "Kucing";
        c.nama = "Hamster";
        
        System.out.println("===== Hewan Favorit Filfimo =====");
        System.out.println();
        
        // Kelas Anjing
        a.anjing();
        a.makan();
        a.kesukaanAnjing();
        a.minum();
        System.out.println();
        
        // Kelas Kucing
        b.kucing();
        b.makan();
        b.kesukaanKucing();
        b.minum();
        System.out.println();
        
        // Kelas Hamster
        c.hasmter();
        c.makan();
        c.kesukaanHamster();
        c.minum();
    }
    
}

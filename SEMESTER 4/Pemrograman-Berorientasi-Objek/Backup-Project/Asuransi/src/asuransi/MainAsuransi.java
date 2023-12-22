package asuransi;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class MainAsuransi {
    public static void main(String[] args) {
        // Pembuatan Objek baru dari masing-masing anak kelas, isi parameter sesuai
        // dengan konstruktor
        Manajer a = new Manajer ("Keuangan", "1910", "Adi", "Jl. Angsa 56", 1500000, 1999);
        Sales b = new Sales (10, "2143", "Wibisana", "Jl. Ayam 78", 500000, 2006);
        Satpam c = new Satpam (5, "IF07N", "Rendra", "Jl. Itik 15", 300000, 2000);
        
        // Pemanggilan methods
        System.out.println("\n=== DISPLAY DATA KARYAWAN ===");
        System.out.println();
        a.cetakManajer();
        b.cetakSales();
        c.cetakSatpam();
    }
    
}

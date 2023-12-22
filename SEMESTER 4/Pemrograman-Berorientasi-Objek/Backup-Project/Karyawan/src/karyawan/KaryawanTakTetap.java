package karyawan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class KaryawanTakTetap extends Karyawan{
    public String masukKerja;
    public int bonus;
    
    // Konstruktor
    public KaryawanTakTetap(String masukKerja, int bonus, String NIP, String nama, String jenisKelamin, int gajiPokok){
        // Super adalah untuk merepresntasikan objek dari kelas induk
        super(NIP, nama, jenisKelamin, gajiPokok);
        this.masukKerja = masukKerja;
        this.bonus = bonus;
    }
    
    // Method Display
    public void cetakKaryawanTakTetap(){
        System.out.println("========== KARYAWAN TIDAK TETAP =========");
        cetakKaryawan();
        System.out.println("Tahun Masuk   : " +this.masukKerja);
        System.out.println("Bonus         : " +this.bonus);
        System.out.println();
    }
}

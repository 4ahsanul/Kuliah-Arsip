package karyawan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class KaryawanTetap extends Karyawan{
    public String pengangkatan;
    public String jabatan;
    public int tunjanganJabatan;
    
    // Konstruktor
    public KaryawanTetap(String pengangkatan, String jabatan, int tunjanganJabatan, String NIP, String nama, String jenisKelamin, int gajiPokok){
        // Super adalah untuk merepresntasikan objek dari kelas induk
        super(NIP, nama, jenisKelamin, gajiPokok);
        this.pengangkatan = pengangkatan;
        this.jabatan = jabatan;
        this.tunjanganJabatan = tunjanganJabatan;
    }
    
    // Method Display
    public void cetakKaryawanTetap(){
        System.out.println("========== KARYAWAN TETAP =========");
        cetakKaryawan();
        System.out.println("Pengangkatan  : " +this.pengangkatan);
        System.out.println("Jabatan       : " +this.jabatan);
        System.out.println("Tunjangan     : " +this.tunjanganJabatan);
        System.out.println();
    }
}

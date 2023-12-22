package karyawan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Karyawan {
    // Deklarasi Fields yang nanti dapat diturunkan kepada anak kelas
    protected String NIP, nama, jenisKelamin;
    protected int gajiPokok;
    
    // Konstruktor
    public Karyawan(String NIP, String nama, String jenisKelamin, int gajiPokok){
        this.NIP = NIP;
        this.nama = nama;
        this.jenisKelamin = jenisKelamin;
        this.gajiPokok = gajiPokok;
    }
    
    // Method display
    public void cetakKaryawan(){
        System.out.println("NIP           : " +this.NIP);
        System.out.println("Nama          : " +this.nama);
        System.out.println("Jenis Kelamin : " +this.jenisKelamin);
        System.out.println("Gaji Pokok    : " +this.gajiPokok);
    }
}

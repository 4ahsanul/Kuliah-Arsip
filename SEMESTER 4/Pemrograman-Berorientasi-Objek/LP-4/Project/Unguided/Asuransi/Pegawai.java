package asuransi;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Pegawai {
    // Fields yang dapat diturunkan
    protected String NIP, nama, alamat;
    protected int gajiPokok, masukKerja;

    // Pembuatan Konstruktor parameter, dapat digunakan di anak kelas
    public Pegawai(String NIP, String nama, String alamat, int gajiPokok, int masukKerja) {
        this.NIP = NIP;
        this.nama = nama;
        this.alamat = alamat;
        this.gajiPokok = gajiPokok;
        this.masukKerja = masukKerja;
    }
    
    // Methods untuk melakukan cetak data pegawai, dapat digunakan di anak kelas
    public void cetakPegawai(){
        System.out.println("NIP           : " +this.NIP);
        System.out.println("Nama          : " +this.nama);
        System.out.println("Jenis Kelamin : " +this.alamat);
        System.out.println("Masuk Kerja   : " +this.masukKerja);
        System.out.println("Gaji Pokok    : " +this.gajiPokok);
    }
    
}

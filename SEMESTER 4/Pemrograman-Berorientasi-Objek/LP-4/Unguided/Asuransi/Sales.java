package asuransi;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Sales extends Pegawai {
    // Fields milik anak kelas sales
    public int jumlahPelanggan, komisi, gajiAkhirSales;

    // Pembuatan konstruktor dengan parameter
    public Sales(int jumlahPelanggan, String NIP, String nama, String alamat, int gajiPokok, int masukKerja) {
        // Super adalah untuk merepresntasikan objek dari kelas induk
        super(NIP, nama, alamat, gajiPokok, masukKerja);
        this.jumlahPelanggan = jumlahPelanggan;
    }
    
    // Methods untuk melakukan perhitungan gaji akhir
    private void gajiAkhirSales(){
        // Hasil komisi adalah 1 pelanggan dihargai 50k
        komisi = this.jumlahPelanggan * 50000;
        // Hasil komisi ditambahkan kedalam gaji pokok
        gajiAkhirSales = komisi + gajiPokok;
        // Pemanggilan hasil perhitungan gaji akhir
        System.out.println("Gaji Akhir    : " +gajiAkhirSales);
    }
    
    // Methods untuk melakukan cetak data sales
    public void cetakSales(){
        System.out.println("========== DATA SALES =========");
        // Methods cetak pegawai dari induk dapat digunakan juga
        cetakPegawai();
        System.out.println("Pelanggan     : " +this.jumlahPelanggan);
        // Methods milik anak kelas sales, dipanggil didalam methods cetak
        gajiAkhirSales();
        System.out.println();
    }    
}

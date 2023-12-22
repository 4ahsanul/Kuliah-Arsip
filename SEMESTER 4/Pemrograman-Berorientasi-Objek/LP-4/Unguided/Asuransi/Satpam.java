package asuransi;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 */
public class Satpam extends Pegawai {
    // Fields milik anak kelas satpam
    public int jamLembur, bonus, gajiAkhirSatpam;

    // Pembuatan konstruktor dengan parameter
    public Satpam(int jamLembur, String NIP, String nama, String alamat, int gajiPokok, int masukKerja) {
        super(NIP, nama, alamat, gajiPokok, masukKerja);
        this.jamLembur = jamLembur;
    }
    
    // Methods untuk melakukan perhitungan gaji akhir
    public void gajiAkhirSatpam(){
        // Bonus yang didapat adalah, setiap 1 jam lembur dihargai 10k
        bonus = this.jamLembur * 10000;
        // Bonus ditambahkan kedalam gaji pokok
        gajiAkhirSatpam = bonus + gajiPokok;
        // Pemanggilan hasil perhitungan gaji akhir
        System.out.println("Gaji Akhir    : " +gajiAkhirSatpam);
    }
    
    // Methods untuk melakukan cetak data satpam
    public void cetakSatpam(){
        System.out.println("========== DATA SATPAM =========");
        // Methods cetak pegawai dari induk dapat digunakan juga
        cetakPegawai();
        System.out.println("Jam Lembur    : " +this.jamLembur +" Jam");
        // Methods milik anak kelas satpam, dipanggil didalam methods cetak
        gajiAkhirSatpam();
        System.out.println();
    }
}

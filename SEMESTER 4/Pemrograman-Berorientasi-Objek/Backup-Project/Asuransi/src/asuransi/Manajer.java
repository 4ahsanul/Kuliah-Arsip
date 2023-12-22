package asuransi;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Manajer extends Pegawai {
    // Fields milik anak kelas manajer
    public String divisi;
    public int tunjangan, gajiAkhirManajer;

    // Pembuatan Konstruktor dengan paramter
    public Manajer(String divisi, String NIP, String nama, String alamat, int gajiPokok, int masukKerja) {
        // Super adalah untuk merepresntasikan objek dari kelas induk
        super(NIP, nama, alamat, gajiPokok, masukKerja);
        this.divisi = divisi;
    }
    
    // Methods untuk melakukan perhitungan gaji akhir
    private void gajiAkhirManajer(){
        int masaJabatan;
        
        // Syarat tunjangan jabatan
        masaJabatan = 2021 - masukKerja;
        
        // Pembuatan perkondisian hasil tunjangan yang didapat sesuai lama bekerja
        // Jika lama bekerja 3 tahun
        if(masaJabatan > 3){
            tunjangan = tunjangan + (gajiPokok * 5/100);
            gajiAkhirManajer = gajiPokok + tunjangan;
        // Jika lama bekerja 5 tahun
        } else if (masaJabatan > 5){
            tunjangan = tunjangan + (gajiPokok * 10/100);
            gajiAkhirManajer = gajiPokok + tunjangan;
        }
        // Pemanggilan hasil perhitungan gaji akhir
        System.out.println("Gaji Akhir    : " +this.gajiAkhirManajer);
    }
    
    // Methods untuk melakukan cetak data manajer
    public void cetakManajer(){
        System.out.println("========== DATA MANAJER =========");
        // Methods cetak pegawai dari induk dapat digunakan juga
        cetakPegawai();
        System.out.println("Divisi        : " +this.divisi);
        // Methods milik anak kelas manajer, dipanggil didalam methods cetak
        gajiAkhirManajer();
        System.out.println();
    }
}

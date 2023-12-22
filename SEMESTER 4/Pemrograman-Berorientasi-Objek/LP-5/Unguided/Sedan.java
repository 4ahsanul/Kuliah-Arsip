package kendaraan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */

//Buat Sedan sebagai interface, bukan kelas, walaupun pada ketentuan modul
//Sedan adalah kelas, ini adalah solusi yang dilakukan untuk The Diamond Problem
//Interface Sedan dengan turunan dari Mobil
public interface Sedan extends Mobil {
    //Deklarasi atribut milik sedan 
    public String FASILITAS_KEAMANAN = "Alarm";
    public String FASILITAS_KENYAMANAN = "Auto Pilot";
    public double KAPASITAS_CC = 255.5;    
    
    //Method untuk menampilkan info sedan
    default void infoSedan(){
        System.out.println("Info Sedan");
        System.out.println("Fasilitas Keamanan   : " + FASILITAS_KEAMANAN);
        System.out.println("Fasilitas Kenyamanan : " + FASILITAS_KENYAMANAN);
        System.out.println("Kapasitas CC         : " + KAPASITAS_CC);
        System.out.println();
    }
    
    //Overriding untuk method tampil innfo karena akan menulis ulang method
    //dengan info dari induk mobil dan info sedan
    @Override
    //Penggunaan default method sebagai solusi untuk memecahkan The Diamond Problem
    //dengan default method ini interface dapat menulis methodnya sendiri
    //Didalamnya juga terdapat akses superclass
    default void tampilInfo(){
        Mobil.super.tampilInfo();
        infoSedan();
    }
    
    //Penggunaan default sebagai solusi untuk memecahkan The Diamond Problem
    //menggunakan double dan tidak menggunakan void karena saat pemanggilan di-
    //kelas minibus tidak diperbolehkan untuk menggunakan void saat melakukan
    //opearasi perhitungan pajak, penggunaan double dipakai karena adanya error
    //jika menggunakan float
    default double hitungPajak(){
        //Deklarasi atribut pajak sedan berada didalam method hitung pajak, dikarenakan
        //jika dekalarasi dilakukan daiatas bersama atribut lain, pajak sedan harus
        //memiliki set nilai (=), meskipun nilai dari pajak sedan sudah di set,
        //akan muncul error final variable
        double PAJAK_SEDAN = PAJAK + (PAJAK + (PAJAK * KAPASITAS_CC * 0.00005));
        System.out.println("Total Pajak Sedan : " + PAJAK_SEDAN);
        //Karena bukan void maka harus memiliki return, returnnya adalah pajak sedan
        //jika return adalah 0, maka hitung pajak tidak akan memunculkan ouputnya
        return PAJAK_SEDAN;
    }
}

package kendaraan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */

//Buat Bus sebagai interface, bukan kelas, walaupun pada ketentuan modul
//Bus adalah kelas, ini adalah solusi yang dilakukan untuk The Diamond Problem
//Interface Bus dengan turunan dari Mobil
public interface Bus extends Mobil {
    //Deklarasi atribut milik Bus
    public int KAPASITAS_PENUMPANG = 35;
    public int KAPASITAS_BAGASI = 50;
    
    //Method untuk menampilkan info bus
    default void infoBus(){
        System.out.println("Info Bus");
        System.out.println("Kapassitas Penumpang : " + KAPASITAS_PENUMPANG);
        System.out.println("Kapasitas Bagasi     : " + KAPASITAS_BAGASI + " Kg");
        System.out.println();
    }
    
    //Overriding untuk method tampil innfo karena akan menulis ulang method
    //dengan info dari induk mobil dan info bus
    @Override
    //Penggunaan default method sebagai solusi untuk memecahkan The Diamond Problem
    //dengan default method ini interface dapat menulis methodnya sendiri
    //Didalamnya juga terdapat akses superclass
    default void tampilInfo(){
        Mobil.super.tampilInfo();
        infoBus();
    }
    
    default double hitungPajak(){        
        //Deklarasi atribut pajak bus berada didalam method hitung pajak, dikarenakan
        //jika dekalarasi dilakukan daiatas bersama atribut lain, pajak bus harus
        //memiliki set nilai (=), meskipun nilai dari pajak sedan sudah di set,
        //akan muncul error final variable
        double PAJAK_BUS = PAJAK + (PAJAK * KAPASITAS_PENUMPANG * KAPASITAS_BAGASI * 0.00005);
        System.out.println("Total Pajak Bus : " + PAJAK_BUS);
        //Karena bukan void maka harus memiliki return, returnnya adalah pajak bus
        //jika return adalah 0, maka hitung pajak tidak akan memunculkan ouputnya
        return PAJAK_BUS;
        
    }
}

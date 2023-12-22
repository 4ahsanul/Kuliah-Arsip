package kendaraan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */

//Dikarenakan Sedan, dan Bus dijadikan interface, maka MiniBus dapat melakukan
//implements terhadap sedan dan bus
//MiniBus adalah kelas dengan implements Sedan dan Bus
public class MiniBus implements Sedan, Bus {
    //Dekalarasi atribut milik MiniBus
    //Set dari atribut dilakukan didalam program
    public String tipe = "Wagon"; //Pribadi atau Wagon
    
    //Mehthod untuk menampilkan info MiniBus
    public void infoMiniBus(){
        System.out.println("Info Mini Bus");
        //Pengguanaan perkondisian if else, karena ada ketentuan untuk tipe dari
        //MiniBus yang digunakan yaitu pribadi dan wagon
        if(tipe == "Pribadi"){
            System.out.println("Tipe MiniBus yang digunakan adalah Pribadi");
        } else {
            System.out.println("Tipe MiniBus yang digunakan adalah Wagon, untuk bongkar muat barang");
        }
        System.out.println();
    } 

    //Overriding default show method
    //Untuk overriding method tampil info karena akan menulis ulang method tampil info
    @Override
    //Penggunaan default method sebagai solusi untuk memecahkan The Diamond Problem
    //dengan default method ini interface dapat menulis methodnya sendiri
    //Didalamnya juga terdapat akses superclass
    public void tampilInfo(){
        Sedan.super.tampilInfo();
        Bus.super.infoBus();
        infoMiniBus();
    } 

    //Overriding default show method
    //Untuk overriding method hitung pajak karena akan menulis ulang method hitung pajak
    @Override
    public double hitungPajak(){
    //METHOD TIDAK TERPAKAI, UNTUK LATIHAN
    //Sedan.super.hitungPajak();
    //Bus.super.hitungPajak();
        //Perkodisian hitung pajak sesuai dengan tipe MiniBus yang digunakan
        //Dari program hitung pajak, akan menampilkan seluruh perhitungan pajak
        //dari Sedan, Bus, dan MiniBus sesuai tipe yang digunakan
        if (tipe == "Pribadi"){
            double PAJAK_MINIBUS_PRIBADI;
            PAJAK_MINIBUS_PRIBADI = (Sedan.super.hitungPajak() * 0.05) + (Bus.super.hitungPajak()*0.03);
            System.out.println("Total Pajak MiniBus Pribadi : " + PAJAK_MINIBUS_PRIBADI);
            return 0;
        } else {
            double PAJAK_MINIBUS_WAGON;
            PAJAK_MINIBUS_WAGON = (Sedan.super.hitungPajak() * 0.03) + (Bus.super.hitungPajak()*0.05);
            System.out.println("Total Pajak MiniBus Wagon : " + PAJAK_MINIBUS_WAGON);
            return 0;            
        }
    }
}

package kendaraan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */

//CATATAN
//Interface memang tidak dapat mempunyai method tetapi dalam bahasa java 8 atau
//terbaru interface dapat memiliki default method
//Buat Mobil sebagai interface, bukan kelas, walaupun pada ketentuan modul
//Mobil adalah kelas, ini adalah solusi yang dilakukan untuk The Diamond Problem
public interface Mobil {
    //Deklarasi atribut milik mobil
    public String NO_PLAT = "IF 07 N";
    public String MERK = "Filfimo";
    public double PAJAK = 755250;
    
    //Method untuk menampilkan info mobil
    default void tampilInfo(){
        System.out.println("Tampil Info Mobil");
        System.out.println("No Plat : " + NO_PLAT);
        System.out.println("Merk    : " + MERK);
        System.out.println("Pajak   : " + PAJAK);
        System.out.println();
    }
}

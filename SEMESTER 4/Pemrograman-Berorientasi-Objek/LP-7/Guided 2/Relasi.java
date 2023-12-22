package relasi;

/**
 *
 * @author FIlfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Relasi {
    public static void main(String[] args) {
        //Pembuatan objek perusahaan dan input nama didalam konstruktor
        Perusahaan Per = new Perusahaan("IF 07 N PRAK PBO");
        //Pembuatan objek peagawai
        Pegawai Peg1, Peg2, Peg3, Peg4;
        //Input nama didalam konstruktor
        Peg1 = new Pegawai("IF07","Filfimo");
        Peg2 = new Pegawai("1910","Yulfiz");
        Peg3 = new Pegawai("2143","Ahsanul");
        Peg4 = new Pegawai("2019","Samsul");
        //Relasi antar Class Pegawai dengan Class Perusahaan
        Per.insertPegawai(Peg1);
        Per.insertPegawai(Peg2);
        Per.insertPegawai(Peg3);
        Per.insertPegawai(Peg4);
        //Pemanggilan output
        Per.tampilPer();
    }
}
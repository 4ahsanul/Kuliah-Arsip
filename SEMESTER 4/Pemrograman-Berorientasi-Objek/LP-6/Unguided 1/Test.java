package pegawai;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
import java.text.DecimalFormat;
public class Test {
    /**Main Method*/
    public static void main(String args[]){
        Pegawai pgw;
        //Membuat objek referensi dari kelas abstract pegawai
        String ouput = "";
        Direktur d = new Direktur("Filfimo", 12000000.00, 7000000.00);
        DecimalFormat digitPresisi = new DecimalFormat("0.00");
        pgw = d;
        /*Objek referensi dari kelas abstrak Pegawai(pgw) merefer objek dari
        kelas Direktur(d) yang diturunkan dari kelas abstrack pegawai*/
        System.out.println("\nDEMO INHERITANS, ENKAPSULASI, POLIMORFI");
        System.out.println("\n=======================================");
        //Mencetak informasi Direktur ke console
        System.out.println("Nama : " + d.namaPegawai() + "\n" + "Jabatan : " 
                + d.jabatan() + "\n" + "Gaji : " 
                + digitPresisi.format(d.gajiPerbulan()) + "\n" + "Dividen : " 
                + digitPresisi.format(d.labaDividen()) + "\n" + "Total : " 
                + digitPresisi.format(d.income()) + "\n");
        System.exit(0);
    }
    
}

package relasi;

/**
 *
 * @author FIlfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Pegawai {
    private String nama, NIP;
    //Pembuatan konstruktor pegawai
    public Pegawai(){
        System.out.println("Konstruktor Pegawai dijalankan....");
    }
    //Pembuatan konstruktorr pegawai dengan NIP dan nama
    public Pegawai(String NIP, String nama){
        this.NIP = NIP;
        this.nama = nama;
        System.out.println("Konstruktor Pegawai dengan NIP&Nama dijalankan....");
    }
    //Method untuk menampilkan data pegawai
    public void tampilPeg(){
        System.out.println("NIP : "+NIP+" ,Nama : "+nama);
    }
}

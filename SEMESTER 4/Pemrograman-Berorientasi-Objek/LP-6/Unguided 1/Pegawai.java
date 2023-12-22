package pegawai;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public abstract class Pegawai {
    private String namaPeg;
    //Konstruktor
    public Pegawai(String nama){
        namaPeg = nama;
    }
    //Method (get) untuk mengembalikan nama pegawai
    public String namaPegawai() {
        return namaPeg;
    }
    //Method abstract ini diwariskan ke semua kelas yang diturunkan dari kelas
    //abstrak ini
    public abstract double income();
}

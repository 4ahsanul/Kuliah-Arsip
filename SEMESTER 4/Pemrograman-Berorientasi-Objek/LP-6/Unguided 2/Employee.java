package employee;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public abstract class Employee {
    //Fields yang dapat diturunkan
    protected String namaPeg, nipPeg;
    // Pembuatan Konstruktor parameter, yang dapat digunakan di anak kelas
    public Employee(String nama, String nip) {
        namaPeg = nama;
        nipPeg = nip;
    }    
    //Method (get) untuk mengembalikan nama pegawai
    public String namaPegawai(){
        return namaPeg;
    }
    //Method (get) untuk mengembalikan nama pegawai
    public String nipPegawai(){
        return nipPeg;
    }
    //Methods untuk melakukan cetak informasi pegawai dan hitung gaji
    //dapat digunakan di anak kelas
    public abstract void cetakInformasi();
    public abstract double hitungGaji();
}
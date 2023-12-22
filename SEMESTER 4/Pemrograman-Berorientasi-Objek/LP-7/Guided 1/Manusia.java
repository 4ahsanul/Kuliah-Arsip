package ibuanak;

/**
 *
 * @author FIlfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Manusia {
    private String nama;
    private int umur;
    private Manusia ibu;
    private Manusia anak;
    //Letak Asosiasi, kelas anak menjadi variabel
    public Manusia(){}
    //Pembuatan Konstruktor Manusia
    public Manusia(String nm, int umr){
        nama = nm;
        umur = umr;
        ibu = new Manusia();
        anak = new Manusia();
        ibu = null;
        anak = null;
        System.out.println("Konstruktor Manusia dijalankan");
    }
    //Pembuatan Konstruktor Manusia terdapat ibu angkat
    public Manusia(String nm, int umr, Manusia ibu_angkat){
        nama = nm;
        umur = umr;
        ibu = new Manusia();
        anak = new Manusia();
        ibu = ibu_angkat;
        ibu_angkat.anak = this;
        System.out.println("Konstruktor Manusia dengan Ibu Angkat dijalankan");
    }
    //Relasi yang menunjukakan relasi
    public void adopsi(Manusia anak_angkat){
        anak = anak_angkat;
        anak_angkat.ibu = this;
    }
    //Method menampilkan data pribadi
    public void cetak(){
        System.out.println("- Data Pribadi -");
        System.out.println("Nama : " + nama);
        System.out.println("Umur : " + umur);
        if(ibu!=null)
            System.out.println("Nama Ibu : " + ibu.nama);
        else if(anak!=null)
            System.out.println("Nama Anak : " + anak.nama);
    }  
}

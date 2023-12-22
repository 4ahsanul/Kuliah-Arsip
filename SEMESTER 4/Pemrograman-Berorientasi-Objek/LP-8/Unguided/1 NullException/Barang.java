package nullexception;
/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI
 * 19102143
 * IF 07 N
 */

public class Barang {
    //Deklarasi fields
    private String kode;
    private String nama;
    
    //Pembuatan setter untuk kode
    public void setKode(String Kode) {
        //Melakukan try-catch
        try {
            kode = Kode;
            //Jika kode yang dimasukan null
            if (kode == null) {
            //Akan mengatasinya dengan throw
            throw new NullPointerException();
            }
        //Catch untuk menangkap error dan mengeluarkan pesan
        } catch (NullPointerException npe) {
            System.out.println("ERROR: " + "Kode barang tidak boleh null");
        }
    }
    //Get untuk mendapatkan kode
    public String getKode() {
    return kode;
    }
    
    //Pembuatan setter untuk nama
    public void setNama(String Nama) {
        //Melakukan try-catch
        try {
            nama = Nama;
            //Jika nama yang dimasukan null
            if (nama == null) {
            //Akan mengatasinya dengan throw
            throw new NullPointerException();
            }
        //Catch untuk menangkap error dan mengeluarkan pesan
        } catch (NullPointerException npe) {
            System.out.println("ERROR: " +"Nama barang tidak boleh null");
        }
    }  
    //Get untuk mendapatkan nama
    public String getNama() {
        return nama;
    }  
}

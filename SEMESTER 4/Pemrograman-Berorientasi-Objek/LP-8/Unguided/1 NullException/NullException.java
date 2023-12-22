package nullexception;
/**
 *
 * @author FILFIMO YULFIZ AHSANUL HULQI
 * 19102143
 * IF 07 N
 */

public class NullException {           
    public static void main(String[] args) {
        //Pembuatan objek barang
        Barang obj = new Barang();
        
        //Melakukan pemberian nilai, disinilah dapat terjadi exception nullpointer        
        obj.setKode(null);
        obj.setNama(null);
     
        //Menampilkan output nilai yang telah dimasukan
        System.out.println("Kode   : " + obj.getKode());
        System.out.println("Nama   : " + obj.getNama());
    }
}

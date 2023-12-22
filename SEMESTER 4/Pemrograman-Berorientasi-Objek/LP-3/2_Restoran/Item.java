package restoran;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Item {
    // Deklarasi fields
    private String nama;
    private String jenis;
    private int harga;
        
    // Konstruktor dengan parameter
    public Item(String nama, String jenis, int harga){
        this.nama = nama;
        this.jenis = jenis;
        this.harga = harga;
    }

    // Accessor dan Mutator dari fields diatas
    public String getNama() {
        return nama;
    }

    public String getJenis() {
        return jenis;
    }

    public int getHarga() {
        return harga;
    }
        
    // Methods untk menampilkan informasi dari item
    public String ShowDetail(){
        return getNama() + "( " + getJenis() + " ) - Rp " + getHarga();
    }
}

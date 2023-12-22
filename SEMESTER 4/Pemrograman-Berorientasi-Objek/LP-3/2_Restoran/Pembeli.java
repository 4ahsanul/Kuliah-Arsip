package restoran;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Pembeli {
    // Dekrasi fields
    private String nama;
    private Item[] historyPemesanan = new Item[99];
    private int pesanan = 0;
        
    // Konstruktor dengan parameter
    public Pembeli(String nama){
        this.nama = nama;
    }
        
    // Accessor nama
    public String getNama(){
        return nama;
    }
        
    // Method overloading untuk melakukan pemesanan
    public void lakukanPemesanan(Item item){
        historyPemesanan[pesanan] = item;
        pesanan++;
        System.out.println(item.getNama() + " berhasil ditambahkan " + this.getNama());
    }
        
    // Method untuk melihat history pemesanan
    public void lihatHistoryPemesanan(){
        // Looping perkondisian dari pesanan
        if(pesanan > 0){
            System.out.println("History pesanan sdr " + this.getNama() + ":");
            // Percabangan, jika user sudah melakukan pemesanan, maka detail item
            // akan ditampilkan
            for(int i = 0; i < pesanan; i++){
                Item order = historyPemesanan[i];
                System.out.println("- " + order.getNama() + " (" + order.getJenis() + ") - Rp " + order.getHarga());
            }
                System.out.println();
            }
            // Jika user belum melakukan input pesanan
            else{
                System.out.println("Anda belum memesan");
                System.out.println();
            }
        }
    
    // Method untu mengkosongkan history pemesanan
    public void kosongkanHistory(){
        System.out.println("Reset History.....");
        this.historyPemesanan = new Item[99];
        this.pesanan = 0;
        System.out.println("History pemesanan telah dikosongkan");
        System.out.println();
        }
}

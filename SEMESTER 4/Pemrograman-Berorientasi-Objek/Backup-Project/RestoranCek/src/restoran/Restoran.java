/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package restoran;

/**
 *
 * @author 62821
 */
public class Restoran {
    public class Item{
        private String nama;
        private String jenis;
        private int harga;
        
        public Item(String nama, String jenis, int harga){
            this.nama = nama;
            this.jenis = jenis;
            this.harga = harga;
        }

        public String getNama() {
            return nama;
        }

        public String getJenis() {
            return jenis;
        }

        public int getHarga() {
            return harga;
        }
        
        public String ShowDetail(){
            return getNama() + "( " + getJenis() + " ) - Rp " + getHarga();
        }
    }
    
    public class Pembeli {
        private String nama;
        private Item[] historyPemesanan = new Item[99];
        private int pesanan = 0;
        
        public Pembeli(String nama){
            this.nama = nama;
        }
        
        public String getNama(){
            return nama;
        }
        
        public void lakukanPemesanan(Item item){
            historyPemesanan[pesanan] = item;
            pesanan++;
            System.out.println(item.getNama() + " berhasil ditambahkan" + this.getNama());
        }
        
        public void lihatHistoryPemesanan(){
            if(pesanan > 0){
                System.out.println("History pesanan sdr " + this.getNama() + ":");
                for(int i = 0; i < pesanan; i++){
                    Item order = historyPemesanan[i];
                    System.out.println("- " + order.getNama() + " (" + order.getJenis() + ") - Rp " + order.getHarga());
                }
                System.out.println();
            }
            else{
                System.out.println("Anda belum memesan");
                System.out.println();
            }
        }
        
        public void kosongkanHistory(){
            System.out.println("Reset History.....");
            this.historyPemesanan = new Item[99];
            this.pesanan = 0;
            System.out.println("History pemesanan telah dikosongkan");
            System.out.println();
        }
    }
    
}

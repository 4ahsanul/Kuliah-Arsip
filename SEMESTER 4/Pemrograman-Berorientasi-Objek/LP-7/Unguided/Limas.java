package hitung;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Limas {
    //Komposisi antara class segitiga dan class persegi
    //Penggunaan class segitiga dan persegi sebagai variabel
    SgtSamaSisi s;
    Persegi p;
    
    //Default konstruktor limas
    public Limas(){
        
    }
    
    //Konstruktor limas dedngan parameter
    public Limas(double xx1, double xy1, double xx2, double xy2, double yx1, double yy1, double yx2, double yy2){ 
        this.s = new SgtSamaSisi(xx1, yy1, xx2, xy2);
        this.p = new Persegi(yx1, yy1, yx2, yy2);
    }
    
    //Method untuk hitung luas limas
    public double hitungLuas(){
        return (4*this.s.hitungLuas()) + this.p.hitungLuas();
    }
    
    //Method untuk menampilkan data dari limas
    public void tampilLimas(){
        //Menampilkan informasi dari segitiga dan persegi
        this.s.tampil();
        this.p.tampil();
        System.out.println("===== DATA LIMAS =====");
        //Method hitung luas limas dipanggil
        System.out.println("Luas Limas : " + this.hitungLuas() + "\n");
    }
}

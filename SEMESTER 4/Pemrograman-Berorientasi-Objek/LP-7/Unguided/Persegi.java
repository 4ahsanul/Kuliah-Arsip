package hitung;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Persegi extends Titik {
    //Deklarasi fields
    public double sisiPSG;
    //Penggunaan class titik sebagai variabel
    Titik tp1, tp2;
    
    //Default konstruktor persegi
    public Persegi(){
        
    }
    
    //Konstruktor persegi dengan parameter
    public Persegi(double x1, double y1, double x2, double y2) {
        tp1 = new Titik(x1,y1);
        tp2 = new Titik(x2,y2);
        this.sisiPSG = super.hitungJarak(tp2, tp1);
    }
    
    //Method untuk hitung luas persegi
    public double hitungLuas(){
        return Math.pow(this.sisiPSG, 2);
    }    
    
    //Method untuk menampilkan data dari persegi
    void tampil(){
        System.out.println("===== DATA PERSEGI =====");
        //Method tampil titik dipanggil
        System.out.print("Point : "); tampilTitik(this.tp1, this.tp2);
        //Hasil sisi persegi dipanggil
        System.out.println("Sisi Persegi : " + this.sisiPSG );
        //Method hasil hitung luas persegi dipanggil
        System.out.println("Luas Persegi : " + hitungLuas() + "\n" );
    }
}

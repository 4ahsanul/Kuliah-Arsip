package hitung;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class SgtSamaSisi extends Titik {
    //Deklarasi fields
    public double sisiSGT;
    //Penggunaan class titik sebagai variabel
    Titik ts1, ts2;
    
    //Default konstruktor sama sisi
    public SgtSamaSisi(){
    
    }

    //Konstruktor sama sisi dengan parameter
    public SgtSamaSisi(double x1, double y1, double x2, double y2) {
        ts1 = new Titik(x1,y1);
        ts2 = new Titik(x2,y2);
        this.sisiSGT = super.hitungJarak(ts2, ts1);
    }
    
    //Method untuk hitung luas sama sisi
    public double hitungLuas(){
        return 0.5 * this.sisiSGT * Math.sqrt(3);
    }
    
    //Method untuk menampilkan data dari sama sisi
    void tampil(){
        System.out.println("===== DATA SEGITIGA =====");
        //Method tampil titik dipanggil
        System.out.print("Point : "); tampilTitik(this.ts1, this.ts2);
        //Hasil sisi sama sisi dipanggil
        System.out.println("Sisi Segitiga : " + this.sisiSGT);
        //Method hasil hitung luas sama sisi dipanggil
        System.out.println("Luas Segitiga : " + hitungLuas() + "\n");
    }
    
}

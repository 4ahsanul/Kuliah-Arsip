package hitung;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Titik {
    //Deklarasi fields
    protected double x;
    protected double y;
    
    //Default konstruktor titik
    Titik(){
        
    }
    
    //Konstruktor titik dengan parameter
    Titik(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    //Method untuk menampilkan atribut dari objek
    void tampil(Titik t2, Titik t1){
        System.out.println("Titik 1     : " +t1.x+", " +t1.y);
        System.out.println("Titik 2     : " +t2.x+", " +t2.y);
        System.out.println("Jarak titik : " + hitungJarak(t2,t1));
    }
    
    //Method untuk hitung jarak
    double hitungJarak(Titik t2, Titik t1){
        double jarakX = Math.pow((t2.x - t1.x), 2);
        double jarakY = Math.pow((t2.y - t1.y), 2);
        return Math.sqrt((jarakX + jarakY));
    }
    
    
    //Method untuk menampilkan point titik
    void tampilTitik(Titik t2, Titik t1){
        System.out.println("[" + t1.x +", "+ t1.y+ "]," + "[" + t2.x +","+ t2.y +"]");
     }
}

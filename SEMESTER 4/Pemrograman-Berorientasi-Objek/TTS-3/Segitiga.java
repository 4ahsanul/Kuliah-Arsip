package polimorfisme;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Segitiga implements IBentuk2D {
    //Deklarasi Atribut milik Segitiga
    public double alas;
    public double tinggi;

    //Pembuatan Konstruktor
    public Segitiga(double alas, double tinggi) {
        this.alas = alas;
        this.tinggi = tinggi;
    }
    
    //Melakukan Overriding terhadap method luas
    @Override
    public double luas(){
        return (this.alas*this.tinggi)/2;
    }
    
    //Melakukan Overriding terhadap method keliling
    @Override
    public double keliling(){
        return 3*this.alas;
    }
    
    //Melakukan Overriding terhadap method display
    @Override
    public void display(){
        System.out.println("Luas dan Keliling Segitiga Sama Sisi");
        System.out.println("Luas     : " + luas());
        System.out.println("Keliling : " + keliling());
    }
}

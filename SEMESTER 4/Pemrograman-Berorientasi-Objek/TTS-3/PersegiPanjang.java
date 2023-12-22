package polimorfisme;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class PersegiPanjang implements IBentuk2D {
    //Deklarasi Atribut milik Persegi Panjang
    public double panjang;
    public double lebar;

    //Pembuatan Konstruktor
    public PersegiPanjang(double panjang, double lebar) {
        this.panjang = panjang;
        this.lebar = lebar;
    }

    //Melakukan Overriding terhadap method luas
    @Override
    public double luas(){
        return this.panjang*this.lebar;
    }
    
    //Melakukan Overriding terhadap method keliling
    @Override
    public double keliling(){
        return 2*(this.panjang+this.lebar);
    }
    
    //Melakukan Overriding terhadap method display
    @Override
    public void display(){
        System.out.println("Luas dan Keliling Persegi Panjang");
        System.out.println("Luas     : " + luas());
        System.out.println("Keliling : " + keliling());
    }  
}

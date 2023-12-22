package polimorfisme;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class BujurSangkar extends PersegiPanjang {
    //Langsung memanggil konstruktor menggunakan atribut yang sama dengan persegi panjang 
    //dikarenakan turunan dari persegi panjang
    public BujurSangkar(double panjang, double lebar) {
        super(panjang, lebar);
    }
    
    //Melakukan Overriding terhadap method display
    @Override
    public void display(){
        System.out.println("Luas dan Keliling Bujur Sangkar");
        System.out.println("Luas     : " + luas());
        System.out.println("Keliling : " + keliling());
    }
}
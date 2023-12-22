package polimorfisme;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Polimorfisme {

    public static void main(String[] args) {
        //Pemebuatan objek baru dari Bentuk2D menjadi b2d
        IBentuk2D b2d;
        
        System.out.println("======== Program Polimorfisme ========");
        //Pembuatan objek baru dari PersegiPanjang menjadi pp dengan memasukan
        //parameter 4,5
        PersegiPanjang pp = new PersegiPanjang(4,5);
        b2d = pp;
        b2d.display();
        System.out.println();
        
        //Pembuatan objek baru dari BujurSangkar menjadi bs dengan memasukan
        //parameter 5,5
        BujurSangkar bs = new BujurSangkar(10, 10);
        b2d = bs;
        b2d.display();
        System.out.println();
        
        //Pembuatan objek baru dari Segitiga menjadi sg dengan memasukan
        //parameter 2.0, 5.0
        Segitiga sg = new Segitiga(6,8);
        b2d = sg;
        b2d.display();
        System.out.println();
    }
}

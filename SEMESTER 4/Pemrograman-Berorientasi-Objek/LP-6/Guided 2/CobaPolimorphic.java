package hewan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
import java.util.Random;
public class CobaPolimorphic {
    public static void main(String[] args) {
        Binatang[] peliharaanku = {new Burung("Kakak Tua"), 
            new Kambing("Etawa"), new Anjing("Bulldog"), new Kucing("Anggora")};
        Binatang kesayangan;
        Random pilihan = new Random();
        //Memilih secara acak
        kesayangan = peliharaanku[pilihan.nextInt(peliharaanku.length)];
        //Mengacak bilangan dari 0 sampai lenght-1 atau (i-1)
        System.out.println("Binatang Kesayangan anda : " + kesayangan);
        System.out.println("Suaranya : " );
        kesayangan.suara();
    }
}

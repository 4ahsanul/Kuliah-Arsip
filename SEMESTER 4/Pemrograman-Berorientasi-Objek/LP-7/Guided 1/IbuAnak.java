package ibuanak;

/**
 *
 * @author FIlfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class IbuAnak {
    public static void main(String[] args) {
        //Pembuatan ojek manusia
        Manusia ibu1 = new Manusia("Amel", 30);
        Manusia anak1 = new Manusia("Raihan", 4);
        Manusia ibu2 = new Manusia("Diana", 40);
        Manusia anak2 = new Manusia("Andi", 5, ibu2);
        //Relasi antar manusia dengan manusia
        System.out.println("======================");
        ibu1.cetak();
        anak1.cetak();
        System.out.println("======================");
        ibu1.adopsi(anak1);
        ibu1.cetak();
        anak1.cetak();
        System.out.println("======================");
        ibu2.cetak();
        anak2.cetak();
    }
    
}

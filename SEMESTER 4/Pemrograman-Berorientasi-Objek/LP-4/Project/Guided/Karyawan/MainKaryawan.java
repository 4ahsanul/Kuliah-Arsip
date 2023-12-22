package karyawan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class MainKaryawan{
    public static void main(String[] args) {
        // Pembuatan Objek Baru
        KaryawanTetap a = new KaryawanTetap("2017","Manager",10000000,"PGT1910","Slamet","Pria",4000000);
        KaryawanTakTetap b = new KaryawanTakTetap("2019",6750000,"PGTT2143","Nasya","Wanita",0);
        Magang c = new Magang("23 Maret 2020","3 Bulan",1000000,"MGN07N","Aldi","Pria",0);
        
        System.out.println("********** DISPLAY DATA KARYAWAN ***********");
        System.out.println();
        
        // Pemanggilan Methods dari masing-masing anak kelas
        a.cetakKaryawanTetap();
        b.cetakKaryawanTakTetap();
        c.cetakMagang();
    }
}

package karyawan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 */
public class Magang extends Karyawan{
    public String masukMagang;
    public String lamaMagang;
    public int bonus;
    
    // Konstruktor
    public Magang(String masukMagang, String lamaMagang, int bonus, String NIP, String nama, String jenisKelamin, int gajiPokok){
        // Super adalah untuk merepresntasikan objek dari kelas induk
        super(NIP, nama, jenisKelamin, gajiPokok);
        this.masukMagang = masukMagang;
        this.lamaMagang = lamaMagang;
        this.bonus = bonus;
    }
    
    // Method Display
    public void cetakMagang(){
        System.out.println("========= MAGANG ========");
        cetakKaryawan();
        System.out.println("Mulai Magang  : " +this.masukMagang);
        System.out.println("Masa Magang   : " +this.lamaMagang);
        System.out.println("Bonus         : " +this.bonus);
        System.out.println();
    }
}

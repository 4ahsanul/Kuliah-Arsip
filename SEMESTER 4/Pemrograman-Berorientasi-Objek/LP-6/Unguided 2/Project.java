package employee;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Project extends Employee {
    //Fields yang dimiliki kelas Project Planner
    private double gajiPokokP, komisiP, pajak;
    private int totalHasilProyekP;
    
    //Pembuatan Konstruktor dengan Parameter
    public Project(String nama, String nip, double gaji, double komisi, 
            int totalHasilProyek) {
        super(nama, nip);
        setGajiPokok(gaji);
        setKomisi(komisi);
        setTotalHasilProyek(totalHasilProyek);
    }
    //Set Gaji Poject Planner
    public void setGajiPokok(double gaji){
        if(gaji>0)
            gajiPokokP = gaji;
        else
            gajiPokokP = 0;
    }
    //Set Komisi Project Planner
    public void setKomisi(double komisi){
        if(komisi>0)
            komisiP = komisi;
        else
            komisiP = 0;
    }
    //Set Total Proyek dari Project Planner
    private void setTotalHasilProyek(int totalHasilProyek){
        if(totalHasilProyek>0)
            totalHasilProyekP = totalHasilProyek;
        else
            totalHasilProyekP = 0;
    }
    //Method mengembalikan nama dan nip
    public String nama(){
        return super.namaPegawai();
    }
    public String nip(){
        return super.nipPegawai();
    }
    //Implementasi method abstract
    @Override
    public double hitungGaji(){
        pajak = gajiPokokP * 0.5;
        return (gajiPokokP + (komisiP*totalHasilProyekP) - pajak);
    }
    @Override
    public void cetakInformasi(){
        System.out.println("===== PROJECT PLANNER =====");
        System.out.println("Nama : " + nama());
        System.out.println("NIP  : " + nip());
        System.out.println("Gaji : " + hitungGaji());
    }
    
}

package relasi;

/**
 *
 * @author FIlfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Perusahaan {
    private String namaPer;
    private Pegawai peg[]; //Agregasi antara pegawai dan perusahaan
    private int counter;
    //Pembuatann konstruktor perusahaan
    public Perusahaan(String namaPer){
        this.namaPer = namaPer;
        counter = 0;
        //Jumlah pegawai yang dapat dimuat
        peg = new Pegawai[4];
        System.out.println("Konstruktor Perusahaan dijalankan....");
    }
    //Relasi agregasi antara pegawai dan perusahaan
    public void insertPegawai(Pegawai p){
        peg[counter] = p;
        counter++;
    }
    //Method untuk menampilkan nama perusahaan
    public void tampilPer(){
        System.out.println("Perusahaan "+namaPer+" memiliki pegawai : ");
        for(int i=0; i<counter; i ++){
            peg[i].tampilPeg();
        }
    }
}
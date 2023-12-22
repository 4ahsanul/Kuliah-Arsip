package pegawai;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public final class Direktur extends Pegawai {
    //Deklarasi
    private double gajiDirektur;
    private double dividenSaham;
    //Konstruktor Kelas Direktur
    public Direktur(String nama, double gaji, double dividen) {
        super(nama); //Memanggil konstruktor dari kelas pegawai
        setGajiDirektur(gaji);
        setDividen(dividen);
    }
    //Set gaji direktur
    public void setGajiDirektur(double gaji){
        if(gaji>0)
            gajiDirektur = gaji;
        else
            gajiDirektur = 0;
    }
    //Set hasil pembagian dividen keuntungan saham
    public void setDividen(double dividen){
        if(dividen>0)
            dividenSaham = dividen;
        else
            dividenSaham = 0;
    }
    //Method yang mengembalikan nama
    public String nama(){
        return super.namaPegawai();
    }
    //Method yang mengembalikan jabatan
    public String jabatan(){
        return "Direktur";
    }
    //Method yang mengembalikan besar gaji direktur
    public double gajiPerbulan(){
        return gajiDirektur;
    }
    //Method yang mengembalikan besar dividen saham
    public double labaDividen(){
        return dividenSaham;
    }
    //Pengimplementasian method abstract dari kelas pegawai
    //Method ini mengembalikan besar gaji direktur
    @Override
    public double income(){
        return(gajiDirektur+dividenSaham);
    }
}

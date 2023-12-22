package employee;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Salaried extends Employee {
    //Fields yang dimiliki kelas Salaried Employee
    public double upahMingguan;

    //Pembuatan Konstruktor dengan parameter
    public Salaried(String nama, String nip, double gaji) {
        super(nama, nip);
        setupahMingguan(gaji);
    }
    //Set gaji Salaried Employee
    private void setupahMingguan(double gaji){
        if(gaji>0)
            upahMingguan = gaji;
        else
            upahMingguan = 0;
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
        return upahMingguan;
    }
    @Override
    public void cetakInformasi(){
        System.out.println("===== SALARIED EMPLOYEE =====");
        System.out.println("Nama : " + nama());
        System.out.println("NIP  : " + nip());
        System.out.println("Gaji : " + hitungGaji());
    }
}
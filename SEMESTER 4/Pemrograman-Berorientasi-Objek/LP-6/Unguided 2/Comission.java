package employee;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Comission extends Employee {
    //Fields yang dimiliki kelas Comission Employee
    private double gajiPokokC, komisiC;
    private int totalPenjualanC;
    
    //Pembuatan Konstruktor dengan Parameter
    public Comission(String nama, String nip, double gaji, double komisi, 
            int totalPenjualan) {
        super(nama, nip);
        setGajiPokok(gaji);
        setKomisi(komisi);
        setTotalPenjualan(totalPenjualan);
    }
    //Set Gaji Comission Employee
    public void setGajiPokok(double gaji){
        if(gaji>0)
            gajiPokokC = gaji;
        else
            gajiPokokC = 0;
    }
    //Set Komisi Comission Employee
    public void setKomisi(double komisi){
        if(komisi>0)
            komisiC = komisi;
        else
            komisiC = 0;
    }
    //Set Total Penjualan dari Comission Employee
    private void setTotalPenjualan(int totalPenjualan){
        if(totalPenjualan>0)
            totalPenjualanC = totalPenjualan;
        else
            totalPenjualanC = 0;
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
        return (gajiPokokC + (komisiC*totalPenjualanC));
    }
    @Override
    public void cetakInformasi(){
        System.out.println("===== COMISSION EMPLOYEE =====");
        System.out.println("Nama : " + nama());
        System.out.println("NIP  : " + nip());
        System.out.println("Gaji : " + hitungGaji());
    }
}

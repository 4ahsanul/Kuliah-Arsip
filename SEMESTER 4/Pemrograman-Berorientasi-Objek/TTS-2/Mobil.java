/*
 * Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Mobil extends KendaraanBermotor
{
    private int kapasitas;

    public Mobil(String no, int thn, int k)
    {
        super(no,thn);
        this.kapasitas = k;
    }

    public void bergerak()
    {
       System.out.println("Kendaraan Bermotor : bergerak");
    }
    
    public int getKapasitasPenumpang()
    {
        return kapasitas;
    }

}

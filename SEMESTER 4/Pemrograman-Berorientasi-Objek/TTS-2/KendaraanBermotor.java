/*
 * Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class KendaraanBermotor
{
    // instance variables - replace the example below with your own
    protected String noPlat;
    protected int thnPembuatan;

    public KendaraanBermotor(String no, int thn)
    {
        noPlat = no;
        thnPembuatan = thn;
    }

    public void bergerak()
    {	
       System.out.println("Kendaraan Bermotor : bergerak");
    }
}

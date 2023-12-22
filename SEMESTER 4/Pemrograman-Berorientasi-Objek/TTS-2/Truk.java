/*
 * Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Truk extends KendaraanBermotor
{
    private int dayaAngkut;

    public Truk(String no, int thn, int da)
    {
        super(no,thn);
        this.dayaAngkut = da;
    }

    public void bergerak()
    {	
       System.out.println("Kendaraan Bermotor : bergerak");
    }

    public int getDayaAngkut()
    {
        return dayaAngkut;
    }
}

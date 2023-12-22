/*
 * Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class TrukDump extends Truk
{
    protected int beratTrukKosong ;

    public TrukDump(String no, int thn, int da, int beratTrukKosong)
    {
        super(no,thn,da);
        beratTrukKosong = beratTrukKosong;
    }

    public void hitungBeratMuatan(int totalBeratTimbangan){
        totalBeratTimbangan = totalBeratTimbangan - beratTrukKosong;
    }
}
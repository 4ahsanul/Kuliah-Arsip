
/**
 * Write a description of class Bola here.
 *
 * @author (FILFIMO YULFIZ AHSANUL HULQI (19102143))
 * @version (4/15/2021)
 */
public class Bola
{
    // instance variables - replace the example below with your own
    private int jejari;
    private int harga;
    public String warna;

    /**
     * Constructor for objects of class Bola
     */
    public void setHarga(int harga)
    {
        this.harga=harga;
    }
    
            public void setWarna (String warna)
    {
        this.warna = warna;
    }
    
    public void setJejari(int jejari)
    {
        this.jejari = jejari;
    }
    

    /**
     * An example of a method - replace this comment with your own
     *
     * @param  y  a sample parameter for a method
     * @return    the sum of x and y
     */
    public double volBola(int jejari)
    {
        return 4/3*3.14*jejari*jejari*jejari;
    }
}

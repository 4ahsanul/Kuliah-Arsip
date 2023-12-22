
/**
 * Write a description of class PersegiPanjang here.
 *
 * @author (Filfimo Yulfiz Ahsanul Hulqi 19102143)
 * @version (4/15/2021)
 */
public class PersegiPanjang
{
    // instance variables - replace the example below with your own
    private double panjang;
    private double lebar;

    /**
     * Constructor for objects of class PersegiPanjang
     */
    public PersegiPanjang()
    {
        // initialise instance variables
        panjang = 13.6;
        lebar=50.3;
    }
    
    public PersegiPanjang(double panjang, double lebar)
    {
        this.panjang=panjang;
        this.lebar=lebar;
    }
    
        public void setPanjang(double panjang)
    {
        this.panjang = panjang;
    }
    
    public void setLebar(double lebar)
    {
        this.lebar = lebar;
    }

    /**
     * An example of a method - replace this comment with your own
     *
     * @param  y  a sample parameter for a method
     * @return    the sum of x and y
     */
    public double luas()
    {
        // put your code here
        return panjang + lebar;
    }
    
    public double keliling()
    {
        return (panjang + lebar)*2;
    }
    
    public double getPanjang()
    {
        return panjang;
    }
    
    public double getLebar()
    {
        return lebar;
    }
    
}

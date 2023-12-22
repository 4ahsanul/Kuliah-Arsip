
/**
 * Write a description of class PersegiPanjang here.
 *
 * @author (Filfimo Yulfiz Ahsanul Hulqi 19102143)
 * @version (4/15/2021)
 */
public class Segitiga
{
    // instance variables - replace the example below with your own
    private int a;
    private int t;

    /**
     * Constructor for objects of class PersegiPanjang
     */
    public Segitiga(int a, int t)
    {
        this.a=a;
        this.t=t;
    }
    
        public void setAlas(int a)
    {
        this.a = a;
    }
    
    public void setTinggi(int t)
    {
        this.t = t;
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
        return 0.5*a*t;
    }
}

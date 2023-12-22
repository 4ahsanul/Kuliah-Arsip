package hewan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Burung extends Binatang {
    private String nama;
    Burung(String nama){
        super("Burung");
        this.nama = nama;
    }
    @Override
    public void suara(){
        System.out.println("Berkicau");
    }
    @Override
    public String toString(){
        return super.toString()+" "+nama;
    }
}

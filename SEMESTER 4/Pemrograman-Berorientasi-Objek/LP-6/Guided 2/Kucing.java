package hewan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Kucing extends Binatang {
    private String nama;
    Kucing(String nama){
        super("Kucing");
        this.nama = nama;
    }
    @Override
    public void suara(){
        System.out.println("Mengeong");
    }
    @Override
    public String toString(){
        return super.toString()+" "+nama;
    }
}

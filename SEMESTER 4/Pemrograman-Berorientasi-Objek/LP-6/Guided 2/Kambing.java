package hewan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Kambing extends Binatang {
    private String nama;
    Kambing(String nama){
        super("Kambing");
        this.nama = nama;
    }
    @Override
    public void suara(){
        System.out.println("Mengembik");
    }
    @Override
    public String toString(){
        return super.toString()+" "+nama;
    }
}

package hewan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Anjing extends Binatang {
    private String nama;
    Anjing(String nama){
        super("Anjing");
        this.nama = nama;
    }
    @Override
    public void suara(){
        System.out.println("Menggonggong");
    }
    @Override
    public String toString(){
        return super.toString()+" "+nama;
    }
}

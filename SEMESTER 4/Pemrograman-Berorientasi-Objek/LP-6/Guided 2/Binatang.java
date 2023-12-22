package hewan;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public abstract class Binatang {
    private String jenis;
    Binatang(String jenis){
        this.jenis = jenis;
    }
    //Deklrasi tidak didefinisikan
    protected abstract void suara();
    
    public String toString(){
        return "Seekor " + jenis;
    }

}

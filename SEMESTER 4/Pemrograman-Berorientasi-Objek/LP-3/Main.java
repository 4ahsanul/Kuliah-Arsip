package pegawai;

/**
 *
 * @author ekoyanuarasobudi
 * 19102124
 * if07n
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        //pembuatan objek baru
        Pegawai P = new Pegawai();
        
        //pengisian nilai melalui asessor
        P.setNIP(19102124);
        P.setNama("Eko Yanuarso Budi");
        P.setAlamat("Pemalang");
        P.setJmlHL(2);
        P.setGaji(4500000);
        
        //pemanggilan method overloading
        P.PegawaiN(1,2);
        P.PegawaiN(2);
        //pemanggilan method cetak
        P.cetak();
    }
    
}

package pegawai;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class MainPegawai {
    public static void main(String[] args) {
        // Pembuatan objek baru
        Pegawai P = new Pegawai();
        
        //Set niilai data pegawai
        System.out.println("=== DATA PEGAWAI ===");
        P.setNIP(19102143);
        P.setNama("Filfimo Yulfiz Ahsanul Hulqi");
        P.setAlamat("Brebes");
        P.setJmlHL(7);
        P.setGaji(5000000);
        
        // Pemanggilan method overloading
        P.PegawaiN(1,2);
        P.PegawaiN(2);
        // Pemanggilan method cetak
        P.cetak();
    }
}

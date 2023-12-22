package pegawai;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Pegawai {
    // Deklarasi fields
    private int NIP;
    private String nama;
    private String alamat;
    private int jmlHL;
    private int gaji;
    private double tot;
    private double tun;

    // Method default konstruktor tanpa parameter
    public Pegawai(){
    
    }
    
    // Accessor dan Mutator dari fields diatas
    public int getNIP() {
        return NIP;
    }
    
    public void setNIP(int NIP) {
        this.NIP = NIP;
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getAlamat() {
        return alamat;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }

    public int getJmlHL() {
        return jmlHL;
    }

    public void setJmlHL(int jmlHL) {
        this.jmlHL = jmlHL;
    }

    public int getGaji() {
        return gaji;
    }

    public void setGaji(int gaji) {
        this.gaji = gaji;
    }
    
    // Method overloading
    public void PegawaiN(double totTun,double totGaji){
        tun = gaji*jmlHL*0.01;
        totTun = tun;
    }
    
    public void PegawaiN(double totGaji){
        totGaji = 0;
        tot = gaji + (gaji*jmlHL*0.01);
    }
    
    // Method cetak untuk menampilkan data
    public void cetak(){
        System.out.println("NIP : " + getNIP());
        System.out.println("Nama : " + getNama());
        System.out.println("Alamat : " + getAlamat());
        System.out.println("Jumlah hari lembur : " + getJmlHL());
        System.out.println("Gaji : " + getGaji());
        System.out.println("Tunjangan : " + tun);
        System.out.println("Total Gaji : " + tot);
    }
}
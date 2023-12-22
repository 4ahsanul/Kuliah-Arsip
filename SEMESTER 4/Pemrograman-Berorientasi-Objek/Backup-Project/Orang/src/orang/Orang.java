package orang;

/**
 *
 * @author Filfimo Yulfiz Ahsanul Hulqi
 * 19102143
 * IF 07 N
 */
public class Orang {
    // Deklarasi fields
    public String nama;
    public int umur;
    public String gender;
    public String alamat;
    public String kerja;
    
    //Default konstruktor tanpa parameter
    public Orang(){

    }

    // Konstruktor dengan parameter
    public Orang(String nama, int umur, String gender, String alamat, String kerja) {
        this.nama = nama;
        this.umur = umur;
        this.gender = gender;
        this.alamat = alamat;
        this.kerja = kerja;
    }

    // Accessor dan Mutator dari fields diatas
    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public int getUmur() {
        return umur;
    }

    public void setUmur(int umur) {
        this.umur = umur;
    }

    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getAlamat() {
        return alamat;
    }

    public void setAlamat(String alamat) {
        this.alamat = alamat;
    }

    public String getKerja() {
        return kerja;
    }

    public void setKerja(String kerja) {
        this.kerja = kerja;
    }
    
    //Method untuk menampilkan output
    void Display(){
        // Penggunaan get untuk mendapatkan nilai dari setter
        System.out.println("Nama : " + getNama());
        System.out.println("Umur : " + getUmur());
        System.out.println("Gender : " + getGender());
        System.out.println("Alamat : " + getAlamat());
        System.out.println("Kerja : " + getKerja());
        System.out.println();
    }
}

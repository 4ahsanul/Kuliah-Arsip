package limasunguided;
/**
 *
 * @author ekoyanuarsobudi
 * 19102124
 * if07n
 */
public class SgtSamaSisi extends Titik{
    private double sisiSGT;
    private Titik tik;

    public SgtSamaSisi(double x1, double y1, double x2, double y2) {
        super(x1, y1, x2, y2);
    }

    public void setSisiSGT(double sisiSGT) {
        this.sisiSGT = tik.hitungJarak();
    }
    
    public double hitungLuas(){
        double luas;
        luas = 0.5 * sisiSGT * Math.sqrt(3);
        return luas;
    }
    
    public void tampil(){
        System.out.println("Point\t: "+"["+x+y+"]");
        System.out.println("Sisi Persegi\t: "+sisiSGT);
        System.out.println("Luas Persegi\t: "+hitungLuas());
    }
}

/*
Kelas SgtSamaSisi memiliki spesifikasi sebagai berikut :
- Memiliki atribut sisiSGT bertipe double (5%)
sisiSGT didapatkan dari perhitungan jarak 2 titik yang diinputkan melalui konstruktornya.
- Memiliki method hitungLuas() untuk menghitung luas segitiga (10%)
- Memiliki method tampil() yang meredefinisi method kelas induk untuk menampilkan nilai atribut
kelas induk dan nilai atribut kelas SgtSamaSisi (10%)
*/